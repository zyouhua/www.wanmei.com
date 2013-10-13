#pragma once

namespace std {

	class AccountConfig : public noncopyable
	{
	public:
		template<class __t>
		void _serialize(__t * nT);
		const char * _streamName();
		__u32 _getAccountMgrCount();

		AccountConfig();
		~AccountConfig();


	};



}
