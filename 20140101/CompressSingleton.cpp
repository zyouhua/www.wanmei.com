#include "Include.h"

namespace std {

	void CompressSingleton::_runBZip2(char * nInBuf, __u32 nInSize, char * nOutBuf, __u32 * nOutSize)
	{
		unsigned int outSize = static_cast<unsigned int>(*nOutSize);
		BZ2_bzBuffToBuffCompress(nOutBuf, &outSize, nInBuf, nInSize, 1, 0, 0);
		(*nOutSize) = static_cast<__u32>(outSize);
	}

	void CompressSingleton::_unBZip2(char * nInBuf, __u32 nInSize, char * nOutBuf, __u32 * nOutSize)
	{
		unsigned int outSize = static_cast<unsigned int>(*nOutSize);
		BZ2_bzBuffToBuffDecompress(nOutBuf, &outSize, nInBuf, nInSize, 0, 0);
		(*nOutSize) = static_cast<__u32>(outSize);
	}

}
