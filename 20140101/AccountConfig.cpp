#include "Include.h"

namespace std {

	const wchar_t * AccountConfig::_streamName()
	{
		return L"accountConfig";
	}

	__u32 AccountConfig::_getAccountMgrCount()
	{
		return mAccountMgrCount;
	}

	AccountConfig::AccountConfig()
	{
		mAccountMgrCount = 0;
	}

	AccountConfig::~AccountConfig()
	{
		mAccountMgrCount = 0;
	}

}
