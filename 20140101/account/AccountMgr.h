#pragma once

namespace std {

	class AccountMgr : public PropertyMgr
	{
	public:
		AccountMgr(__u32 nId);
		~AccountMgr();
	private:
		__u32 mId;
	};
	typedef shared_ptr<AccountMgr> AccountMgrPtr;

}
