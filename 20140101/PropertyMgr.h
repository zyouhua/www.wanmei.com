#pragma once

namespace std {

	class PropertyMgr
	{
	public:
		PropertyMgr();
		~PropertyMgr();

	private:
		map<__u32, PropertyPtr> mPropertys;
	};

}
