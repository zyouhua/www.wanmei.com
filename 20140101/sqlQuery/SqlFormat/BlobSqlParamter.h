#pragma once

namespace std {

	class BlobSqlParamter : public SqlParamter, public streambuf
	{
	public:
		void _runStatement(sql::PreparedStatement * nStatement);

		BlobSqlParamter(__i32 nIndex, char * nBuf, size_t nSize);
		~BlobSqlParamter();
	};

}
