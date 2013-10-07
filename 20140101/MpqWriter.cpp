#include "Include.h"

namespace std {

	void MpqWriter::_runOpen(const char * nPath, __u32 nCount)
	{
		__u32 pos_ = MpqHash::_hashSize() * nCount;
		pos_ += MpqHead::_hashSize();
		pos_ += sizeof(__u16);
		mBinWriter._openUrl(nPath);
		mBinWriter._runSeek(pos_);
	}

	void MpqWriter::_writeKey(const char * nPath, const char * nKey)
	{
		__u32 beg_ = mBinWriter._runTell();
		__u32 size_ = this->_readBuf(nPath);
		__u32 end_ = this->_writeBuf(size_);
		shared_ptr<MpqHash> mpqHash(new MpqHash());
		HashSingleton hashSingleton_ = __singleton<HashSingleton>::_instance();
		mpqHash->_setHash1(hashSingleton_._hashString(nKey, 0x100));
		mpqHash->_setHash2(hashSingleton_._hashString(nKey, 0x200));
		mpqHash->_setBeg(beg_);
		mpqHash->_setEnd(end_);
		mpqHash->_setSize(size_);
		mMpqHash.push_back(mpqHash);
	}

	__u32 MpqWriter::_readBuf(const char * nPath)
	{
		__u32 result_ = 0;
		fstream fstream_;
		fstream_.open(nPath, ios::binary|ios::in);
		fstream_.seekg(0, ios::end);
		result_ = static_cast<__u32>(fstream_.tellg());
		fstream_.seekg(0, ios::beg);
		memset(mCommon, 0, sizeof(mCommon));
		fstream_.read(mCommon, result_);
		mCommon[result_] = 0;
		fstream_.close();
		return result_;
	}

	__u32 MpqWriter::_writeBuf(__u32 nSize)
	{
		__u32 result_ = 5 * 1024 * 1024;
		memset(mCompress, 0, sizeof(mCompress));
		CompressSingleton compressSingleton_ = __singleton<CompressSingleton>::_instance();
		compressSingleton_._runBZip2(mCommon, nSize, mCompress, &result_);
		mBinWriter._serialize(mCompress, result_);
		return result_;
	}

	void MpqWriter::_runClose()
	{
		mBinWriter._runSeek(0);
		this->_serialize(&mBinWriter);
		mBinWriter._runClose();
	}

	MpqWriter::MpqWriter()
	{
		mCompress = new char[5 * 1024 * 1024];
		mCommon = new char[5 * 1024 * 1024];
	}

	MpqWriter::~MpqWriter()
	{
		delete [] mCompress;
		delete [] mCommon;
	}

}
