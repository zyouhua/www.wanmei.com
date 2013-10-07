#include "Include.h"
#include "MpqHash.h"

namespace std {

	__u32 MpqHash::_hashSize()
	{
		return (sizeof(__u32) * 5);
	}

	void MpqHash::_setHash2(__u32 nHash)
	{
		mHash2 = nHash;
	}

	__u32 MpqHash::_getHash2()
	{
		return mHash2;
	}

	void MpqHash::_setHash1(__u32 nHash)
	{
		mHash1 = nHash;
	}

	__u32 MpqHash::_getHash1()
	{
		return mHash1;
	}

	void MpqHash::_setBeg(__u32 nBeg)
	{
		mBeg = nBeg;
	}

	__u32 MpqHash::_getBeg()
	{
		return mBeg;
	}

	void MpqHash::_setEnd(__u32 nEnd)
	{
		mEnd = nEnd;
	}

	__u32 MpqHash::_getEnd()
	{
		return mEnd;
	}

	void MpqHash::_setSize(__u32 nSize)
	{
		mSize = nSize;
	}

	__u32 MpqHash::_getSize()
	{
		return mSize;
	}

	MpqHash::MpqHash()
		: mHash1(0)
		, mHash2(0)
		, mBeg(0)
		, mEnd(0)
		, mSize(0)
	{

	}

	MpqHash::~MpqHash()
	{
		mHash1 = 0;
		mHash2 = 0;
		mBeg = 0;
		mEnd = 0;
		mSize = 0;
	}

}
