#pragma once

namespace std {

	enum  SqlFieldId_ : unsigned short
	{
		mSqlFieldIdNone_ = 0,
		mSqlFieldIdPrimary_ = 1,
		mSqlFieldIdNotNull_ = 2,
		mSqlFieldIdUnique_ = 4,
		mSqlFieldIdBinary_ = 8,
		mSqlFieldIdUnsigned_ = 16,
		mSqlFieldIdZeroFill_ = 32,
		mSqlFieldIdAutoIncremet_ = 64
	};

}
