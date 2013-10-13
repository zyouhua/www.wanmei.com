#pragma once

namespace std {

	class AccountMain : noncopyable
	{
	public:
		void _runPreinit();
		void _runInit();
		void _runSave();
		void _runExit();

		AccountMain();
		~AccountMain();
	};

}