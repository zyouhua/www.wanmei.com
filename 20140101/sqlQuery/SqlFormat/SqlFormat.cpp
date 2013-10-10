#include "../SqlInc-.h"

namespace std {

	void SqlFormat::_serialize(bool& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"TINYINT(1)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(char& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<char>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned char& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10) UNSIGNED", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<unsigned char>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(short& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<short>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned short& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10) UNSIGNED", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<unsigned short>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(long& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<long>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned long& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"INT(10) UNSIGNED", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<unsigned long>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(long long& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"BIGINT", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<long long>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned long long& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"BIGINT UNSIGNED", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<unsigned long long>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(float& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"FLOAT", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<float>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(double& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"DOUBLE", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<double>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(wstring& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"VARCHAR(255)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<wstring>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(string& nValue, const wchar_t * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, L"VARCHAR(255)", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (mSqlDealUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else if (mSqlDealInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else if ( (mSqlDealPrimary_ == mSqlDeal) && ((nSqlFieldId & mSqlFieldIdPrimary_) > 0) )
		{
			this->_runPrimary(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(list<string>& nValue, const wchar_t * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_addHeadstream(SqlHeadstreamPtr& nSqlHeadstreams)
	{
		mSqlHeadstreams.push_back(nSqlHeadstreams);
	}

	const wstring& SqlFormat::_sqlCommand()
	{
		list<SqlHeadstreamPtr>::iterator it = mSqlHeadstreams.begin();
		for ( ; it != mSqlHeadstreams.end(); ++it )
		{
			SqlHeadstreamPtr& sqlHeadstream = (*it);
			this->_runFormat(sqlHeadstream);
		}
		return mValue;
	}

	void SqlFormat::_runInsert(wstring& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}
	
	void SqlFormat::_runUpdate(wstring& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += L"=";
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	void SqlFormat::_runWhere(list<wstring>& nValue, const wchar_t * nName)
	{
		mValue += nName;
		mValue += L"(";
		bool temp = false;
		list<wstring>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += L",";
			}
			mValue += mValueCharacter;
			mValue += (*it);
			mValue += mValueCharacter;
			temp = true;
		}
		mValue += L") ";
	}

	void SqlFormat::_runWhere(wstring& nValue, const wchar_t * nName)
	{
		mValue += nName;
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		mValue += L" ";
	}

	void SqlFormat::_runFormat(SqlHeadstreamPtr& nSqlHeadstream)
	{
		SqlType_ sqlType_ = nSqlHeadstream->_sqlType();
		if (mSqlTypeCreate_ == sqlType_)
		{
			this->_runCreate(nSqlHeadstream);
		}
		else if (mSqlTypeSelect_ == sqlType_)
		{
			this->_runSelect(nSqlHeadstream);
		}
		else if (mSqlTypeInsert_ == sqlType_)
		{
			this->_runInsert(nSqlHeadstream);
		}
		else if (mSqlTypeUpdate_ == sqlType_)
		{
			this->_runUpdate(nSqlHeadstream);
		}
		else if (mSqlTypeInsertUpdate_ == sqlType_)
		{
			this->_runInsertUpdate(nSqlHeadstream);
		}
		else if (mSqlTypeDelete_ == sqlType_)
		{
			this->_runDelete(nSqlHeadstream);
		}
		else
		{
		}
	}

	void SqlFormat::_runCreate(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue += L"CREATE TABLE ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L"(";
		mBeg = true;
		mSqlDeal = mSqlDealCreate_;
		nSqlHeadstream->_runSelect(this);
		mBeg = true;
		mEnd = false;
		mSqlDeal = mSqlDealPrimary_;
		nSqlHeadstream->_runSelect(this);
		if (mEnd)
		{
			mValue += L")";
		}
		mValue += L")ENGINE=MYISAM DEFAULT CHARSET=utf8;";
		mSqlDeal = mSqlDealNone_;
	}

	void SqlFormat::_runSelect(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue += L"SELECT ";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream->_runSelect(this);
		mValue += L" FROM ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L" ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream->_runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	void SqlFormat::_runInsert(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue += L"INSERT INTO ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L" (";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream->_runSelect(this);
		mValue += L") VALUES (";
		mBeg = true;
		mSqlDeal = mSqlDealInsert_;
		nSqlHeadstream->_runSelect(this);
		mValue += L") ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream->_runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	void SqlFormat::_runUpdate(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue += L"UPDATE ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L" SET ";
		mBeg = true;
		mSqlDeal = mSqlDealUpdate_;
		nSqlHeadstream->_runSelect(this);
		mSqlDeal = mSqlDealWhere_;
		mValue += L" ";
		nSqlHeadstream->_runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	void SqlFormat::_runInsertUpdate(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue += L"INSERT INTO ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L" (";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream->_runSelect(this);
		mValue += L") VALUES (";
		mBeg = true;
		mSqlDeal = mSqlDealInsert_;
		nSqlHeadstream->_runSelect(this);
		mValue += L") ";
		mSqlDeal = mSqlDealInsertUpdate_;
		nSqlHeadstream->_runSelect(this);
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream->_runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	void SqlFormat::_runDelete(SqlHeadstreamPtr& nSqlHeadstream)
	{
		mValue = L"DELETE FROM ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream->_tableName();
		mValue += mFieldCharacter;
		mValue += L" ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream->_runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	SqlFormat::SqlFormat()
	{
		mSqlHeadstreams.clear();
		mUpdate.clear();
		mSqlDeal = mSqlDealNone_;
		mValue = L"";
		mName = L"";
		mBeg = false;
		mEnd = false;
	}

	SqlFormat::~SqlFormat()
	{
		mSqlHeadstreams.clear();
		mUpdate.clear();
		mSqlDeal = mSqlDealNone_;
		mValue = L"";
		mName = L"";
		mBeg = false;
		mEnd = false;
	}


	wstring SqlFormat::mValueCharacter = L"'";
	wstring SqlFormat::mFieldCharacter = L"`";
	wstring SqlFormat::mUpdateCharacter = L"@";

}
