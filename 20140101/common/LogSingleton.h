#pragma once

#define log_1(x, y) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y
#define log_2(x, y, y0) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0
#define log_3(x, y, y0, y1) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1
#define log_4(x, y, y0, y1, y2) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2
#define log_5(x, y, y0, y1, y2, y3) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2 % y3
#define log_6(x, y, y0, y1, y2, y3, y4) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2 % y3 % y4
#define log_7(x, y, y0, y1, y2, y3, y4, y5) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5
#define log_8(x, y, y0, y1, y2, y3, y4, y5, y6) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5 % y6
#define log_9(x, y, y0, y1, y2, y3, y4, y5, y6, y7) boost::format("[%1% %2%][%3%][%4%]%5%") % __DATE__ % __TIME__  % x % __LINE__ % y % y0 % y1 % y2 % y3 % y4 % y5 % y6 % y7
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
