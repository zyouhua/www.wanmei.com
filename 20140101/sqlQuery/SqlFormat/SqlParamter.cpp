#include "../SqlInc-.h"


namespace std {

	__i32 SqlParamter::_getIndex()
	{
		return mIdex;
	}

	SqlParamter::SqlParamter(__i32 nIndex, char * nBuf, size_t nSize)
		: mIdex(nIndex)
	{
		setg(nBuf, nBuf, nBuf + nSize);
	}

}
