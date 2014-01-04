#pragma once

namespace std {

	class IPropertyId
	{
	public:
		virtual PropertyPtr _createProperty(PropertyMgrPtr& nPropertyMgr) = 0;
		virtual __u32 _getId() = 0;
	};
	typedef shared_ptr<IPropertyId> PropertyIdPtr;

}
