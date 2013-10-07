#include "Include.h"

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
		mDriver = mysql::get_mysql_driver_instance();
	}

	SqlSingleton::SqlSingleton()
		: mDriver (nullptr)
	{

	}

	SqlSingleton::~SqlSingleton()
	{
		mDriver = nullptr;
	}

}
