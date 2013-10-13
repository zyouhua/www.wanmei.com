#pragma once

namespace std {

	class DeviceService : public noncopyable
	{
	public:
		bool _contain(__u32 nDeviceType);
		void _runInit();

		DeviceService();
		~DeviceService();

	private:
		set<__u32> mDeviceTypes;
	};

}
