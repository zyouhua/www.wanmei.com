#pragma once

#ifdef __cplusplus
extern "C" {
#endif

	//MpqReader
	//void _runOpen(const char * nPath);
	extern __funapi void __stdcall m00000001(const char * n1);
	//bool _runCheck(const char * nKey);
	extern __funapi bool __stdcall m00000002(const char * n1);
	//void _readKey(const char * nKey, char ** nBuf, __u32 * nSize);
	extern __funapi void __stdcall m00000003(const char * n1, char ** n2, __u32 * n3);
	//void _freeBuf(char * nBuf, __u32 nSize);
	extern __funapi void __stdcall m00000004(char * n1, __u32 n2);
	//void _runClose();
	extern __funapi void __stdcall m00000005();

	//MpqWriter
	//void _runOpen(const char * nPath, __u32 nCount);
	extern __funapi  void __stdcall m10000001(const char * n1, __u32 n2);
	//void _writeKey(const char * nPath, const char * nKey);
	extern __funapi  void __stdcall m10000002(const char * n1, const char * n2);
	//void _runClose();
	extern __funapi  void __stdcall m10000003();

#ifdef __cplusplus
}
#endif
