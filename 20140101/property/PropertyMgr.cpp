#include "PropertyInc-.h"

namespace std {
	
	PropertyPtr& PropertyMgr::_getProperty(IPropertyId& nPropertyId)
	{
		__u32 propertyId_ = nPropertyId._getId();
		map<__u32, PropertyPtr>::iterator it = mPropertys.find(propertyId_);
		if (it == mPropertys.end())
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_2("PropertyMgr::_getProperty", propertyId_));
			throw exception();
		}
		return it->second;
	}

	void PropertyMgr::_addProperty(PropertyPtr& nProperty, PropertyIdPtr& nPropertyId)
	{
		__u32 propertyId_ = nPropertyId->_getId();
		map<__u32, PropertyPtr>::iterator it = mPropertys.find(propertyId_);
		if (it == mPropertys.end())
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_2("PropertyMgr::_AddProperty", propertyId_));
			throw exception();
		}
		mPropertys[propertyId_] = nProperty;
	}

	PropertyMgr::PropertyMgr()
	{
		mPropertys.clear();
	}

	PropertyMgr::~PropertyMgr()
	{
		mPropertys.clear();
	}

}
