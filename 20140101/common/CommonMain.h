#pragma once

namespace std {

	class CommonMain : noncopyable
	{
	public:
		void _runPreinit();
		void _runInit();
		void _runSave();
		void _runExit();

		CommonMain();
		~CommonMain();
	};

}
