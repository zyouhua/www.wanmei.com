#pragma once

namespace std {

	class AccountService : public noncopyable
	{
	public:
		template<class __t>
		void _serialize(__t * nT);
		const char * _streamName();
		void _runInit();

	private:
		void _initConfig();

	public:
		AccountService();
		~AccountService();

	private:
		__u32 mAccountMgrCount;

	private:
		static const char * mAccountServiceUrl;
	};

	template<class __t>
	void AccountService::_serialize(__t * nT)
	{
		nT->_serialize(mAccountMgrCount, "accountMgrCount");
	}

}
