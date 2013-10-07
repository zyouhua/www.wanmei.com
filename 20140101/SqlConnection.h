#pragma once

namespace std {

	class SqlConnection
	{
	public:
		void _runConnect();

		SqlConnection(Driver * nDriver);
		~SqlConnection();

	private:
		Driver * mDriver;
	};

	typedef shared_ptr<SqlConnection> SqlConnectionPtr;

}
