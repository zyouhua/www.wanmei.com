#pragma once

namespace std {

	class MpqWriter
	{
	public:
		void _runOpen(const char * nPath, __u32 nCount);
		void _writeKey(const char * nPath, const char * nKey);
		void _runClose();

	private:
		__u32 _readBuf(const char * nPath);
		__u32 _writeBuf(__u32 nSize);

	public:
		template<class __t>
		void _serialize(__t * nT);
		MpqWriter();
		~MpqWriter();

	private:
		BinWriter mBinWriter;
		MpqHead mMpqHead;
		list<shared_ptr<MpqHash>> mMpqHash;
		char * mCompress;
		char * mCommon;
	};
	template<class __t>
	void MpqWriter::_serialize(__t * nT)
	{
		nT->_serialize(mMpqHead, L"mpqHead");
		nT->_serialize(mMpqHash, L"mpqHash");
	}

}
