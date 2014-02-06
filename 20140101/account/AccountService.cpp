#include "AccountInc-.h"

namespace std {

	const char * AccountService::_streamName()
	{
		return "accountService";
	}

	void AccountService::_runInit()
	{
		this->_initConfig();
	}

	void AccountService::_initConfig()
	{
		XmlReader xmlReader_;
		xmlReader_._openUrl(mAccountServiceUrl);
		xmlReader_._selectStream(_streamName());
		this->_serialize(&xmlReader_);
	}

	void AccountService::_initAccountMgr()
	{
		for (__u32 i = 0; i < mAccountMgrCount; ++i)
		{
			AccountMgrPtr accountMgr_(new AccountMgr(i));
			this->_runCreate(dynamic_pointer_cast<PropertyMgr>(accountMgr_));
			mAccountMgrs[i] = accountMgr_;
		}
	}

	AccountService::AccountService()
		: mAccountMgrCount(0)
	{
		mAccountMgrs.clear();
	}

	AccountService::~AccountService()
	{
		mAccountMgrs.clear();
		mAccountMgrCount = 0;
	}

	const char * AccountService::mAccountServiceUrl = "mpq://www.wanmei.com/account\\account.core*accountService.xml";

}
