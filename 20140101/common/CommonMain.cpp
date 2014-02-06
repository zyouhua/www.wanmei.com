#include "../Include.h"

#include "CommonMain.h"
#include "DeviceService.h"

namespace std {

	void CommonMain::_runPreinit()
	{
		LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
		logSingleton_._runInit();

		__singleton<CompressSingleton>::_instance();

		__singleton<HashSingleton>::_instance();

		__singleton<DeviceService>::_instance();
	}

	void CommonMain::_runInit()
	{
		HashSingleton& hashSingleton = __singleton<HashSingleton>::_instance();
		hashSingleton._runInit();

		DeviceService& deviceService = __singleton<DeviceService>::_instance();
		deviceService._runInit();
	}

	void CommonMain::_runSave()
	{

	}

	void CommonMain::_runExit()
	{

	}

	CommonMain::CommonMain()
	{

	}

	CommonMain::~CommonMain()
	{

	}

}
