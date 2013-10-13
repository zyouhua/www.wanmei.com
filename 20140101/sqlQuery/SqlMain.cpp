#include "../Include.h"

#include "SqlMain.h"

namespace std {

	void SqlMain::_runPreinit()
	{
		__singleton<SqlSingleton>::_instance();
	}

	void SqlMain::_runInit()
	{
		SqlSingleton& sqlSingleton_ = __singleton<SqlSingleton>::_instance();
		sqlSingleton_._runInit();
	}

	void SqlMain::_runSave()
	{

	}

	void SqlMain::_runExit()
	{

	}

	SqlMain::SqlMain()
	{

	}

	SqlMain::~SqlMain()
	{

	}

}
