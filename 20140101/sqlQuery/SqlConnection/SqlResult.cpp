#include "../SqlInc-.h"

namespace std {

	bool SqlResult::_runNext()
	{
		return mResultSet->next();
	}

	SqlResult::SqlResult(sql::ResultSet * nResultSet)
		: mResultSet (nResultSet)
	{

	}

	SqlResult::~SqlResult()
	{
		try
		{
			mResultSet->close();
		}
		catch (SQLException& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_2(nException.getErrorCode(), nException.getSQLStateCStr()));
		}
		catch (runtime_error& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_1(nException.what()));
		}
	}

}