#pragma once

namespace std {

	class SqlMain : noncopyable
	{
	public:
		void _runPreinit();
		void _runInit();
		void _runSave();
		void _runExit();

		SqlMain();
		~SqlMain();
	};

}
