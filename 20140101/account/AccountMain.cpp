#include "../Include.h"

#include "AccountMain.h"

namespace std {

	void AccountMain::_runPreinit()
	{
		AccountService accountService = __singleton<AccountService>::_instance();
	}

	void AccountMain::_runInit()
	{
		AccountService accountService = __singleton<AccountService>::_instance();
		accountService._runInit();
	}

	void AccountMain::_runSave()
	{
	}

	void AccountMain::_runExit()
	{
	}

	AccountMain::AccountMain()
	{
	}

	AccountMain::~AccountMain()
	{
	}

}
