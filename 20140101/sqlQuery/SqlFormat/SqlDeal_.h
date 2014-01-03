#pragma once

namespace std {

	enum SqlDeal_ : unsigned short
	{
		mSqlDealNone_,
		mSqlDealCreate_,
		mSqlDealSelect_,
		mSqlDealInsert_,
		mSqlDealUpdate_,
		mSqlDealInsertUpdate_,
		mSqlDealWhere_,
		mSqlDealUpdateSelect_,
		mSqlDealUpdateWhen_,
		mSqlDealUpdateThen_,
		mSqlDealPrimary_,
	};

}
