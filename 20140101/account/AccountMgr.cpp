#include "AccountInc-.h"

namespace std {

	AccountMgr::AccountMgr(__u32 nId)
		: mId(nId)
	{

	}

	AccountMgr::~AccountMgr()
	{
		mId = 0;
	}

}
