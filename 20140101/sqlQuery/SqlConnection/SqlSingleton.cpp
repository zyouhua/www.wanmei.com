#include "../SqlInc-.h"

namespace std {

	SqlConnectionPtr SqlSingleton::_getConnection()
	{
		return this->_createSqlConnection();
	}

	SqlConnectionPtr SqlSingleton::_createSqlConnection()
	{
		SqlConnectionPtr sqlConnection(new SqlConnection(mDriver));
		return sqlConnection;
	}

	const wchar_t * SqlSingleton::_streamName()
	{
		return L"sqlSingleton";
	}

	void SqlSingleton::_runInit()
	{
		try
		{
			mDriver = mysql::get_mysql_driver_instance();
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

	SqlSingleton::SqlSingleton()
		: mDriver (nullptr)
	{
		mConnections.clear();
	}

	SqlSingleton::~SqlSingleton()
	{
		mConnections.clear();
		mDriver = nullptr;
	}

}
