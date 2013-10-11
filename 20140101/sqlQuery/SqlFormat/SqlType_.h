#pragma once

namespace std {

	enum  SqlType_ : unsigned short
	{
		mSqlTypeCreate_,
		mSqlTypeSelect_,
		mSqlTypeInsert_,
		mSqlTypeUpdate_,
		mSqlTypeDelete_,
		mSqlTypeInsertUpdate_,
		mSqlTypeInsertUpdateEx_,
		mSqlTypeUpdateInsert_,
	};

}
