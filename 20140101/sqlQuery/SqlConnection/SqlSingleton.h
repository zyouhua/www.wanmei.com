#pragma once

namespace std {

	class SqlSingleton : public noncopyable
	{
	public:
		template<class __t>
		void _runSql(SqlFormat& nSqlFormat, __t& nSqlHeadstream);
		void _runUpdate(SqlFormat& nSqlFormat);
		void _runSql(string& nSql);
		SqlConnectionPtr _getConnection();

	public:
		const char * _streamName();
		void _runInit();

	private:
		SqlConnectionPtr _createSqlConnection();
		void _initConfig();
		void _initDriver();

		template<class __t>
		void _serialize(__t * nT);

	public:
		SqlSingleton();
		~SqlSingleton();

	private:
		friend class SqlConnection;
		list<SqlConnectionPtr> mConnections;
		sql::Driver * mDriver;
		string mHostName;
		string mUserName;
		string mPassward;
		string mSchema;

	private:
		static const char * mSqlConfig;
	};

	template<class __t>
	void SqlSingleton::_serialize(__t * nT)
	{
		nT->_serialize(mHostName, "hostName");
		nT->_serialize(mUserName, "userName");
		nT->_serialize(mPassward, "passward");
		nT->_serialize(mSchema, "schema");
	}

	template<class __t>
	void SqlSingleton::_runSql(SqlFormat& nSqlFormat, __t& nSqlHeadstream)
	{
		SqlConnectionPtr& sqlConnection = this->_getConnection();
		SqlResultPtr sqlResult = sqlConnection->_runQuery(nSqlFormat._sqlCommand());
		while (sqlResult->_runNext())
		{
			nSqlHeadstream._runSelect(sqlResult);
		}
	}

}
