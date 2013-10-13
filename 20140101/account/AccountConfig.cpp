#include "AccountInc-.h"

namespace std {

	const char * AccountConfig::_streamName()
	{
		return "accountConfig";
	}

	__u32 AccountConfig::_getAccountMgrCount()
	{
		return mAccountMgrCount;
	}

	AccountConfig::AccountConfig()
		: mAccountMgrCount(0)
	{
	}

	AccountConfig::~AccountConfig()
	{
		mAccountMgrCount = 0;
	}

}
