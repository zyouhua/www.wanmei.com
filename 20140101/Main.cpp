#include "Include.h"
#include "Main.h"

using namespace std;

//void _runPreinit();
void __stdcall mn00000001()
{
	LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
	logSingleton_._runInit();

	__singleton<CompressSingleton>::_instance();

	__singleton<HashSingleton>::_instance();

	__singleton<MpqReader>::_instance();

	__singleton<SqlSingleton>::_instance();
}

//void _runInit();
void __stdcall mn00000002()
{
	SqlSingleton& sqlSingleton_ = __singleton<SqlSingleton>::_instance();
	sqlSingleton_._runInit();
}

//void _runSave();
void __stdcall mn00000003()
{
}

//void _runExit();
void __stdcall mn00000004()
{
}
