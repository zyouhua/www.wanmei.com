#pragma once

namespace std {

	class SqlResult : public noncopyable
	{
	public:
		bool _runNext();
		SqlResult(sql::ResultSet * nResultSet);
		~SqlResult();

	private:
		sql::ResultSet * mResultSet;
	};
	typedef shared_ptr<SqlResult> SqlResultPtr;

}
