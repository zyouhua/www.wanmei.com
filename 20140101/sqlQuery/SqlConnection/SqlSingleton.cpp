#include "../SqlInc-.h"

namespace std {

	void SqlSingleton::_runUpdate(SqlFormat& nSqlFormat)
	{
		SqlConnectionPtr& sqlConnection = this->_getConnection();
		sqlConnection->_runUpdate(nSqlFormat);
	}

	void SqlSingleton::_runSql(string& nSql)
	{
		SqlConnectionPtr& sqlConnection = this->_getConnection();
		sqlConnection->_runSql(nSql);
	}

	SqlConnectionPtr SqlSingleton::_getConnection()
	{
		return this->_createSqlConnection();
	}

	SqlConnectionPtr SqlSingleton::_createSqlConnection()
	{
		SqlConnectionPtr sqlConnection(new SqlConnection(this));
		return sqlConnection;
	}

	const char * SqlSingleton::_streamName()
	{
		return "sqlSingleton";
	}

	void SqlSingleton::_runInit()
	{
		this->_initConfig();
		this->_initDriver();
	}

	void SqlSingleton::_initConfig()
	{
		XmlReader xmlReader_;
		xmlReader_._openUrl(mSqlConfig);
		xmlReader_._selectStream(_streamName());
		this->_serialize(&xmlReader_);
	}

	void SqlSingleton::_initDriver()
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

	const char * SqlSingleton::mSqlConfig = "mpq://www.wanmei.com/account\\account.core*sqlConfig.xml";

}
