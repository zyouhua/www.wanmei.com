#pragma once

namespace std {

	class HashSingleton : public noncopyable
	{
	public:
		__u64 _runId(const char * nName);
		__u64 _runId(__u32 nId);
		__u32 _runCommon(const char * nName);
		__u32 _runComputer();
		__u32 _runCellphone();
		__u32 _runNameId(const char * nName);
		__u32 _runPasswardId(const char * nName);
		__u32 _runClusterID(const char * nName);
		__u32 _runServerID(const char * nName);
		__u32 _runDatabaseId(const char * nName);
		__u32 _runTableId(const char * nName);
		__u32 _hashString(const char * nKey, __u16 nOffset);
		void _runInit();

		HashSingleton();
		~HashSingleton();

	private:
		ptime mTime;
	};

}
