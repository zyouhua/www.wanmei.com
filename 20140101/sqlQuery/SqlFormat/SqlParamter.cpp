#include "../SqlInc-.h"

namespace std {

	void SqlParamter::_setIndex(__i32 nIndex)
	{
		mIdex = nIndex;
	}

	__i32 SqlParamter::_getIndex()
	{
		return mIdex;
	}

	SqlParamter::SqlParamter()
		: mIdex(0)
	{

	}

	SqlParamter::~SqlParamter()
	{
		mIdex = 0;
	}

}
