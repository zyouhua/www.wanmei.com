#include "AccountInc-.h"

using namespace std;

//void _runOpen(const char * nPath);
void __stdcall a00000001(const char * n1)
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	mpqReader_._runOpen(n1);
}
