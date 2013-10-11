#pragma once

namespace std {

	class SqlParamter : public streambuf
	{
	public:
		__i32 _getIndex();

		SqlParamter(__i32 nIndex, char * nBuf, size_t nSize);

	private:
		__i32 mIdex;
	};
	typedef shared_ptr<SqlParamter> SqlParamterPtr;

}
