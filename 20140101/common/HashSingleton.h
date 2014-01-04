#pragma once

namespace std {

	class HashSingleton : public noncopyable
	{
	public:
		__u32 _hashString(const char * nKey, __u16 nOffset);

		HashSingleton();
		~HashSingleton();
	};

}
