#include "../SqlInc-.h"

namespace std {

	void BlobSqlParamter::_runStatement(sql::PreparedStatement * nStatement)
	{
		istream istream_(this);
		nStatement->setBlob(mIdex, &istream_);
	}

	BlobSqlParamter::BlobSqlParamter(__i32 nIndex, char * nBuf, size_t nSize)
	{
		this->_setIndex(nIndex);
		setg(nBuf, nBuf, nBuf + nSize);
	}

	BlobSqlParamter::~BlobSqlParamter()
	{

	}


}
