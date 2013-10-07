#pragma once

namespace std {

	class CompressSingleton
	{
	public:
		void _runBZip2(char * nInBuf, __u32 nInSize, char * nOutBuf, __u32 * nOutSize);
		void _unBZip2(char * nInBuf, __u32 nInSize, char * nOutBuf, __u32 * nOutSize);
	};

}
