#pragma once

namespace std {

	class PackageMain : noncopyable
	{
	public:
		void _runPreinit();
		void _runInit();
		void _runSave();
		void _runExit();

		PackageMain();
		~PackageMain();
	};

}
