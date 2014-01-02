#pragma once

namespace std {

	class MpqReader
	{
	public:
		void _runOpen(const char * nPath);
		bool _runCheck(const char * nKey);
		void _readKey(const char * nKey, char ** nBuf, __u32 * nSize);
		void _freeBuf(char * nBuf, __u32 nSize);
		void _runClose();
		template<class __t>
		void _serialize(__t * nT);
		MpqReader();
		~MpqReader();
	private:
		BinReader mBinReader;
		MpqHead mMpqHead;
		list<shared_ptr<MpqHash>> mMpqHash;
		char * mCommon;
		bool mOpen;
	};
	template<class __t>
	void MpqReader::_serialize(__t * nT)
	{
		nT->_serialize(mMpqHead, L"mpqHead");
		nT->_serialize(mMpqHash, L"mpqHash");
	}

}
