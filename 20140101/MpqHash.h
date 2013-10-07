#pragma once

namespace std {

	class MpqHash
	{
	public:
		static __u32 _hashSize();
		void _setHash2(__u32 nHash);
		__u32 _getHash2();
		void _setHash1(__u32 nHash);
		__u32 _getHash1();
		void _setBeg(__u32 nBeg);
		__u32 _getBeg();
		void _setEnd(__u32 nEnd);
		__u32 _getEnd();
		void _setSize(__u32 nSize);
		__u32 _getSize();
		template<class __t>
		void _serialize(__t * nT);
		MpqHash();
		~MpqHash();
	private:
		__u32 mHash1;
		__u32 mHash2;
		__u32 mBeg;
		__u32 mEnd;
		__u32 mSize;
	};
	template<class __t>
	void MpqHash::_serialize(__t * nT)
	{
		nT->_serialize(mHash1, L"hash1");
		nT->_serialize(mHash2, L"hash2");
		nT->_serialize(mBeg, L"beg");
		nT->_serialize(mEnd, L"end");
		nT->_serialize(mSize, L"size");
	}

}
