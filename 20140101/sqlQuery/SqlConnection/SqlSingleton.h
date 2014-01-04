#pragma once

namespace std {

	class SqlSingleton
	{
	public:
		template<class __t>
		void _runSql(SqlFormat& nSqlFormat, __t& nSqlHeadstream);
		void _runUpdate(SqlFormat& nSqlFormat);
		void _runSql(string& nSql);
		SqlConnectionPtr _getConnection();
		void _runInit();

	public:
		const wchar_t * _streamName();

	private:
		SqlConnectionPtr _createSqlConnection();

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
	};

	template<class __t>
	void SqlSingleton::_serialize(__t * nT)
	{
		nT->_serialize(mHostName, "hostName");
		nT->_serialize(mUserName, "userName");
		nT->_serialize(mPassward, "passward");
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
