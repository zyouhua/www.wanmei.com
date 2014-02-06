#include "CommonInc-.h"

namespace std {

	bool DeviceService::_contain(__u32 nDeviceType)
	{
		set<__u32>::iterator it = mDeviceTypes.find(nDeviceType);
		return (it != mDeviceTypes.end());
	}

	void DeviceService::_runInit()
	{
		HashSingleton& hashSingleton = __singleton<HashSingleton>::_instance();
		mDeviceTypes.insert(hashSingleton._runComputer());
		mDeviceTypes.insert(hashSingleton._runCellphone());
	}

	DeviceService::DeviceService()
	{
		mDeviceTypes.clear();
	}

	DeviceService::~DeviceService()
	{
		mDeviceTypes.clear();
	}

}
