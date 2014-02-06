#pragma once

namespace std {

	class AccountService : public PropertySink
	{
	public:
		public ErrorCode_ _createAccount(const char * nAccountName, const char * nNickname, const char * nPassward)
		{
			uint hashName_ = GenerateId._runTableId(nAccountName);
			AccountConfig accountConfig_ = __singleton<AccountConfig>._instance();
			uint accountMgrCount_ = accountConfig_._getAccountMgrCount();
			uint accountMgrIndex_ = hashName_ % accountMgrCount_;
			AccountMgr accountMgr_ = mAccountMgrs[accountMgrIndex_];
			return accountMgr_._createAccount(nAccountName, nNickname, nPassward);
		}

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
