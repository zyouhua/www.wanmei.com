#include "../SqlInc-.h"

namespace std {

	SqlResultPtr SqlConnection::_runQuery(const string& nSql)
	{
		try
		{
			SqlResultPtr sqlResult(new SqlResult(mStatement->executeQuery(nSql)));
			return sqlResult;
		}
		catch (SQLException& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_3(nException.getErrorCode(), nException.getSQLStateCStr(), nSql));
		}
		catch (runtime_error& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_2(nException.what(), nSql));
		}
	}

	void SqlConnection::_runSql(const string& nSql)
	{
		try
		{
			sql::PreparedStatement * statement = mConnection->prepareStatement(nSql);
			statement->execute();
			statement->close();
			delete statement;
		}
		catch (SQLException& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_3(nException.getErrorCode(), nException.getSQLStateCStr(), nSql));
		}
		catch (runtime_error& nException)
		{
			LogSingleton& logSingleton_ = __singleton<LogSingleton>::_instance();
			logSingleton_._logError(log_2(nException.what(), nSql));
		}
	}

	SqlConnection::SqlConnection(SqlSingleton& nSqlSingleton)
	{
		try
		{
			mConnection = nSqlSingleton.mDriver->connect(nSqlSingleton.mHostName, nSqlSingleton.mUserName, nSqlSingleton.mPassward);
			mConnection->setSchema(nSqlSingleton.mSchema);
			mStatement = mConnection->createStatement();
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

	SqlConnection::~SqlConnection()
	{
		if (nullptr != mStatement)
		{
			try
			{
				mStatement->close();
				delete mStatement;
				mStatement = nullptr;
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
		if (nullptr != mConnection)
		{
			try
			{
				mConnection->close();
				delete mConnection;
				mConnection = nullptr;
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

}
