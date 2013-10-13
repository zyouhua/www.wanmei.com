#include "CommonInc-.h"

namespace std {

	__u64 HashSingleton::_runId(string nName)
	{
		//DateTime dataTime_ = DateTime.Now;
		DateTime dataTime_ = new DateTime(2013, 9, 24);
		long minute_ = 100000000;
		long baseTime_ = 6349259520;
		uint ticks_ = (uint)(dataTime_.Ticks / minute_ - baseTime_);
		long result_ = (long)_runCommon(nName);
		result_ <<= 32;
		result_ += ticks_;
		return result_;
	}

	__u64 HashSingleton::_runId(__u32 nId)
	{
		DateTime dataTime_ = DateTime.Now;
		long minute_ = 100000000;
		long baseTime_ = 6349259520;
		uint ticks_ = (uint)(dataTime_.Ticks / minute_ - baseTime_);
		long result_ = (long)nId;
		result_ <<= 32;
		result_ += ticks_;
		return result_;
	}

	__u32 HashSingleton::_runCommon(const char * nName)
	{
		return _hashString(nName, 0x100);
	}

	__u32 HashSingleton::_runComputer()
	{
		//1282682146
		return _hashString("computer", 0x100);
	}

	__u32 HashSingleton::_runCellphone()
	{
		//318023319
		return _hashString("cellphone", 0x150);
	}

	__u32 HashSingleton::_runNameId(const char * nName)
	{
		return _hashString(nName, 0x50);
	}
	
	__u32 HashSingleton::_runPasswardId(const char * nName)
	{
		return _hashString(nName, 0x300);
	}

	__u32 HashSingleton::_runClusterID(const char * nName)
	{
		return this->_hashString(nName, 0x100);
	}

	__u32 HashSingleton::_runServerID(const char * nName)
	{
		return this->_hashString(nName, 0x150);
	}

	__u32 HashSingleton::_runDatabaseId(const char * nName)
	{
		return this->_hashString(nName, 0x200);
	}

	__u32 HashSingleton::_runTableId(const char * nName)
	{
		return this->_hashString(nName, 0x250);
	}

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

	HashSingleton::HashSingleton()
	{

	}

	HashSingleton::~HashSingleton()
	{

	}

}
