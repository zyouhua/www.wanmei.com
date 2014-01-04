#pragma once

namespace std {

	class PropertyMgr;
	typedef shared_ptr<PropertyMgr> PropertyMgrPtr;
	class Property
	{
	public:
		virtual void _runInit();

	protected:
		PropertyMgrPtr& _getPropertyMgr();

		Property(PropertyMgrPtr& mPropertyMgr);
		~Property();

	private:
		PropertyMgrPtr& mPropertyMgr;
	};
	typedef shared_ptr<Property> PropertyPtr;

}
