#pragma once

namespace std {

	class AccountService : public PropertySink
	{
	public:
		template<class __t>
		void _serialize(__t * nT);
		const char * _streamName();
		void _runInit();

	private:
		void _initConfig();
		void _initAccountMgr();

	public:
		AccountService();
		~AccountService();

	private:
		map<__u32, AccountMgrPtr> mAccountMgrs;
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
