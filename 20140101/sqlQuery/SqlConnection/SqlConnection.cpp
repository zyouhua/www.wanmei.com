#include "../SqlInc-.h"

namespace std {

	SqlResultPtr SqlConnection::_runQuery(const string& nSql)
	{
		sql::ResultSet * resultSet = nullptr;
		try
		{
			resultSet = mStatement->executeQuery(nSql);
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
		return SqlResultPtr(new SqlResult(resultSet));
	}

	void SqlConnection::_runSql(const string& nSql)
	{
		try
		{
			mStatement->execute(nSql);
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

	void SqlConnection::_runUpdate(SqlFormat& nSqlFormat)
	{
		try
		{
			if (nSqlFormat._sqlParamter())
			{
				sql::PreparedStatement * statement = mConnection->prepareStatement(nSqlFormat._sqlCommand());
				list<SqlParamterPtr>::iterator it = nSqlFormat.mSqlParamter.begin();
				for ( ; it != nSqlFormat.mSqlParamter.end(); ++it )
				{
					SqlParamterPtr& sqlParamter = (*it);
					statement->setBlob(sqlParamter->_getIndex(), )
				}
				statement->executeUpdate();
				statement->close();
				delete statement;
			}
			else
			{
				mStatement->executeUpdate(nSqlFormat._sqlCommand());
			}
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

	SqlConnection::SqlConnection(SqlSingleton * nSqlSingleton)
	{
		try
		{
			mConnection = nSqlSingleton->mDriver->connect(nSqlSingleton->mHostName, nSqlSingleton->mUserName, nSqlSingleton->mPassward);
			mConnection->setSchema(nSqlSingleton->mSchema);
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
