#pragma once

namespace std {

	class SqlConnection
	{
	public:
		void _runConnect();

		SqlConnection(sql::Driver * nDriver);
		~SqlConnection();

	private:
		sql::Driver * mDriver;
	};

	typedef shared_ptr<SqlConnection> SqlConnectionPtr;

}
