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

	AccountService::AccountService()
		: mAccountMgrCount(0)
	{
	}

	AccountService::~AccountService()
	{
		mAccountMgrCount = 0;
	}

	const char * AccountService::mAccountServiceUrl = "mpq://www.wanmei.com/account\\account.core*accountService.xml";

}
