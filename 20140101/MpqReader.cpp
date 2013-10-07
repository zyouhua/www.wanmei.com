#include "Include.h"

namespace std {

	void MpqReader::_runOpen(const char * nPath)
	{
		if (mOpen)
		{
			return;
		}
		mBinReader._openUrl(nPath);
		this->_serialize(&mBinReader);
		mOpen = true;
	}

	bool MpqReader::_runCheck(const char * nKey)
	{
		HashSingleton hashSingleton_ = __singleton<HashSingleton>::_instance();
		unsigned long hash1 = hashSingleton_._hashString(nKey, 0x100);
		unsigned long hash2 = hashSingleton_._hashString(nKey, 0x200);
		list<shared_ptr<MpqHash>>::iterator it = mMpqHash.begin();
		for ( ; it != mMpqHash.end(); ++it )
		{
			shared_ptr<MpqHash>& mpqHash = (*it);
			if ( (mpqHash->_getHash1() == hash1) && (mpqHash->_getHash2() == hash2) )
			{
				return true;
			}
		}
		return false;
	}

	void MpqReader::_readKey(const char * nKey, char ** nBuf, __u32 * nSize)
	{
		shared_ptr<MpqHash> mpqHash;
		HashSingleton hashSingleton_ = __singleton<HashSingleton>::_instance();
		unsigned long hash1 = hashSingleton_._hashString(nKey, 0x100);
		unsigned long hash2 = hashSingleton_._hashString(nKey, 0x200);
		list<shared_ptr<MpqHash>>::iterator it = mMpqHash.begin();
		for ( ; it != mMpqHash.end(); ++it )
		{
			shared_ptr<MpqHash>& tempMpqHash = (*it);
			if ( (tempMpqHash->_getHash1() == hash1) && (tempMpqHash->_getHash2() == hash2) )
			{
				mpqHash = (*it);
				break;
			}
		}
		if (mpqHash.get() == nullptr)
		{
			return;
		}
		memset(mCommon, 0, sizeof(mCommon));
		mBinReader._runSeek(mpqHash->_getBeg());
		mBinReader._serialize(mCommon, mpqHash->_getEnd());
		(*nBuf) = new char[mpqHash->_getSize()];
		(*nSize) = mpqHash->_getSize();
		CompressSingleton compressSingleton_ = __singleton<CompressSingleton>::_instance();
		compressSingleton_._unBZip2(mCommon, mpqHash->_getEnd(), (*nBuf), nSize);
	}

	void MpqReader::_freeBuf(char * nBuf, __u32 nSize)
	{
		delete [] nBuf;
	}

	void MpqReader::_runClose()
	{
		mBinReader._runClose();
		mOpen = false;
	}

	MpqReader::MpqReader()
		: mOpen(false)
	{
		mCommon = new char[5 * 1024 * 1025];
	}

	MpqReader::~MpqReader()
	{
		delete [] mCommon;
		mOpen = false;
	}

}
