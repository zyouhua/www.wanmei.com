#pragma once

#define log_1(y) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y
#define log_2(y, y0) boost::format("[%1% %2%][%3%][%4%][%5%]%6%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0
#define log_3(y, y0, y1) boost::format("[%1% %2%][%3%][%4%][%5%][%6%]%7%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1
#define log_4(y, y0, y1, y2) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%]%8%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2
#define log_5(y, y0, y1, y2, y3) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%][%8%]%9%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2 % y3
#define log_6(y, y0, y1, y2, y3, y4) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%][%8%][%9%]%10%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2 % y3 % y4
#define log_7(y, y0, y1, y2, y3, y4, y5) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%][%8%][%9%][%10%]%11%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5
#define log_8(y, y0, y1, y2, y3, y4, y5, y6) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%][%8%][%9%][%10%][%11%]%12%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5 % y6
#define log_9(y, y0, y1, y2, y3, y4, y5, y6, y7) boost::format("[%1% %2%][%3%][%4%][%5%][%6%][%7%][%8%][%9%][%10%][%11%][%12%]%13%") % __DATE__ % __TIME__  % MODULE_NAME % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5 % y6 % y7

namespace std {

	namespace src = boost::log::sources;

	class LogSingleton
	{
	public:
		void _logError(boost::format& nFormat);

		void _runInit();

		LogSingleton();
		~LogSingleton();

	private:
		src::logger mLogger;
	};

}
