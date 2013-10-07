#include "Include.h"
#include "MpqExport.h"
using namespace std;

//MpqReader
//void _runOpen(const char * nPath);
void __stdcall m00000001(const char * n1)
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	mpqReader_._runOpen(n1);
}
//bool _runCheck(const char * nKey);
bool __stdcall m00000002(const char * n1)
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	return mpqReader_._runCheck(n1);
}
//void _readKey(const char * nKey, char ** nBuf, __u32 * nSize);
void __stdcall m00000003(const char * n1, char ** n2, __u32 * n3)
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	mpqReader_._readKey(n1, n2, n3);
}
//void _freeBuf(char * nBuf, __u32 nSize);
void __stdcall m00000004(char * n1, __u32 n2)
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	mpqReader_._freeBuf(n1, n2);
}
//void _runClose();
void __stdcall m00000004()
{
	MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
	mpqReader_._runClose();
}

//MpqWriter
//void _runOpen(const char * nPath, __u32 nCount);
void __stdcall m10000001(const char * n1, __u32 n2)
{
	MpqWriter& mpqWriter_ = __singleton<MpqWriter>::_instance();
	mpqWriter_._runOpen(n1, n2);
}
//void _writeKey(const char * nPath, const char * nKey);
void __stdcall m10000002(const char * n1, const char * n2)
{
	MpqWriter& mpqWriter_ = __singleton<MpqWriter>::_instance();
	mpqWriter_._writeKey(n1, n2);
}
//void _runClose();
void __stdcall m10000003()
{
	MpqWriter& mpqWriter_ = __singleton<MpqWriter>::_instance();
	mpqWriter_._runClose();
}
