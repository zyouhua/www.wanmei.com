#pragma once

namespace std {

	class PropertySink
	{
	public:
		void _runCreate(PropertyMgrPtr& nPropertyMgr);
		void _registerCreate(PropertyIdPtr& nPropertyId);

		PropertySink();
		~PropertySink();

	private:
		map<__u32, PropertyIdPtr> mCreates;
	};

}
