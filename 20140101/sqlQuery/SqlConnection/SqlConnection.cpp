#include "../SqlInc-.h"

namespace std {

	void SqlConnection::_runConnect()
	{

	}

	SqlConnection::SqlConnection(sql::Driver * nDriver)
		: mDriver (nDriver)
	{

	}

	SqlConnection::~SqlConnection()
	{
		mDriver = nullptr;
	}

}
