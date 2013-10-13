#include "Include.h"
#include "Main.h"

#include "common/CommonMain.h"
#include "package/PackageMain.h"
#include "sqlQuery/SqlMain.h"
#include "account/AccountMain.h"

using namespace std;

//void _runPreinit();
void __stdcall mn00000001()
{
	CommonMain& commonMain = __singleton<CommonMain>::_instance();
	commonMain._runPreinit();

	PackageMain& packageMain = __singleton<PackageMain>::_instance();
	packageMain._runPreinit();

	SqlMain& sqlMain = __singleton<SqlMain>::_instance();
	sqlMain._runPreinit();

	AccountMain& accountMain = __singleton<AccountMain>::_instance();
	accountMain._runPreinit();
}

//void _runInit();
void __stdcall mn00000002()
{
	CommonMain& commonMain = __singleton<CommonMain>::_instance();
	commonMain._runInit();

	PackageMain& packageMain = __singleton<PackageMain>::_instance();
	packageMain._runInit();

	SqlMain& sqlMain = __singleton<SqlMain>::_instance();
	sqlMain._runInit();

	AccountMain& accountMain = __singleton<AccountMain>::_instance();
	accountMain._runInit();
}

//void _runSave();
void __stdcall mn00000003()
{
	CommonMain& commonMain = __singleton<CommonMain>::_instance();
	commonMain._runSave();

	PackageMain& packageMain = __singleton<PackageMain>::_instance();
	packageMain._runSave();

	SqlMain& sqlMain = __singleton<SqlMain>::_instance();
	sqlMain._runSave();

	AccountMain& accountMain = __singleton<AccountMain>::_instance();
	accountMain._runSave();
}

//void _runExit();
void __stdcall mn00000004()
{
	CommonMain& commonMain = __singleton<CommonMain>::_instance();
	commonMain._runExit();

	PackageMain& packageMain = __singleton<PackageMain>::_instance();
	packageMain._runExit();

	SqlMain& sqlMain = __singleton<SqlMain>::_instance();
	sqlMain._runExit();

	AccountMain& accountMain = __singleton<AccountMain>::_instance();
	accountMain._runExit();
}
