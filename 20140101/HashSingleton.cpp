#include "Include.h"

namespace std {

	__u32 HashSingleton::_hashString(const char * nKey, __u16 nOffset)
	{
		__u32 seed1 = 0x7FED7FED;
		__u32 seed2 = 0xEEEEEEEE;

		__u32 ch;

		while (*nKey != 0) {
			ch    = toupper(*nKey++, locale());
			seed1 = crypt_buf[nOffset + ch] ^ (seed1 + seed2);
			seed2 = ch + seed1 + seed2 + (seed2 << 5) + 3;
		}

		return seed1;
	}

}
