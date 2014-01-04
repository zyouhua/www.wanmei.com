#pragma once

namespace std {

	class IPropertyId;
	typedef shared_ptr<IPropertyId> PropertyIdPtr;
	class PropertyMgr
	{
	public:
		PropertyPtr& _getProperty(IPropertyId& nPropertyId);
		void _addProperty(PropertyPtr& nProperty, PropertyIdPtr& nPropertyId);

		PropertyMgr();
		~PropertyMgr();

	private:
		map<__u32, PropertyPtr> mPropertys;
	};

}
