#include "Include.h"

namespace std {

	void SqlConnection::_runConnect()
	{

	}

	SqlConnection::SqlConnection(Driver * nDriver)
		: mDriver (nDriver)
	{

	}

	SqlConnection::~SqlConnection()
	{
		mDriver = nullptr;
	}

}
