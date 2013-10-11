#pragma once

namespace std {

	enum SqlDeal_ : unsigned short
	{
		mSqlDealNone_,
		mSqlDealCreate_,
		mSqlDealSelect_,
		mSqlDealInsert_,
		mSqlDealUpdate_,
		mSqlDealUpdateSelect_,
		mSqlDealUpdateWhen_,
		mSqlDealUpdateThen_,
		mSqlDealInsertUpdate_,
		mSqlDealWhere_,
		mSqlDealPrimary_,
	};

}
