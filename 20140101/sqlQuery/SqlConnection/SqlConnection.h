#pragma once

namespace std {

	class SqlSingleton;

	class SqlConnection
	{
	public:
		SqlResultPtr _runQuery(const string& nSql);
		void _runSql(const string& nSql);

		SqlConnection(SqlSingleton& nSqlSingleton);
		~SqlConnection();
	private:
		sql::Connection * mConnection;
		sql::Statement * mStatement;
	};

	typedef shared_ptr<SqlConnection> SqlConnectionPtr;

}
