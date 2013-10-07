#pragma once

namespace std {

	class AccountConfig
	{
	public:
		template<class __t>
		void _headSerialize(__t * nT);
		const wchar_t * _streamName();
		__u32 _getAccountMgrCount();

		AccountConfig();
		~AccountConfig();

	private:
		__u32 mAccountMgrCount;
	};

	template<class __t>
	void AccountConfig::_headSerialize(__t * nT)
	{
		nT->_serialize(mAccountMgrCount, L"accountMgrCount");
	}

}
