#pragma once

namespace std {

	class StringSqlParamter : public SqlParamter
	{
	public:
		void _runStatement(sql::PreparedStatement * nStatement);

		StringSqlParamter(string& nValue);
		~StringSqlParamter();
	private:
		string mValue;
	};

}
