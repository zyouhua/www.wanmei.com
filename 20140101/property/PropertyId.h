#pragma once

namespace std {

	template<class __t>
	class PropertyId : IPropertyId
	{
	public:
		PropertyPtr _createProperty(PropertyMgrPtr& nPropertyMgr);
		__u32 _getId();
	};

	template<class __t>
	PropertyPtr PropertyId<__t>::_createProperty(PropertyMgrPtr& nPropertyMgr)
	{
		return shared_ptr<__t>(new __t(nPropertyMgr));
	}

	template<class __t>
	__u32 PropertyId<__t>::_getId()
	{
		return typeid(__t).name();
	}

}
