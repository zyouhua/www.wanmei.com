#include "../Include.h"

#include "PackageMain.h"

namespace std {

	void PackageMain::_runPreinit()
	{
		__singleton<MpqReader>::_instance();
	}

	void PackageMain::_runInit()
	{
	}

	void PackageMain::_runSave()
	{
	}

	void PackageMain::_runExit()
	{
	}

	PackageMain::PackageMain()
	{
	}

	PackageMain::~PackageMain()
	{
	}

}
