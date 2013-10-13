#pragma once

namespace std {

	class SqlParamter : public noncopyable
	{
	public:
		virtual void _runStatement(sql::PreparedStatement * nStatement) = 0;
		void _setIndex(__i32 nIndex);
		__i32 _getIndex();

		SqlParamter();
		virtual ~SqlParamter();

	protected:
		__i32 mIdex;
	};
	typedef shared_ptr<SqlParamter> SqlParamterPtr;

}
