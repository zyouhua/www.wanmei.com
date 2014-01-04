#include "../SqlInc-.h"

namespace std {

	void StringSqlParamter::_runStatement(sql::PreparedStatement * nStatement)
	{
		nStatement->setString(mIdex, mValue);
	}

	StringSqlParamter::StringSqlParamter(string& nValue)
		: mValue(nValue)
	{

	}

	StringSqlParamter::~StringSqlParamter()
	{

	}

}
