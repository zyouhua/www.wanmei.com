#include "../SqlInc-.h"

namespace std {

	void SqlFormat::_serialize(bool& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "TINYINT(1)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(char& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<char>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned char& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10) UNSIGNED", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<unsigned char>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(short& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<short>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned short& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10) UNSIGNED", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<unsigned short>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(long& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<long>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned long& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "INT(10) UNSIGNED", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<unsigned long>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(long long& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "BIGINT", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<long long>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(unsigned long long& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "BIGINT UNSIGNED", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<unsigned long long>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(float& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "FLOAT", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<float>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(double& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "DOUBLE", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<double>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(wstring& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "VARCHAR(255)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<wstring>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(string& nValue, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "VARCHAR(255)", nSqlFieldId);
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
		else if (mSqlDealUpdateSelect_ == mSqlDeal)
		{
			this->_runUpdateSelect(nValue, nName);
		}
		else if (mSqlDealUpdateWhen_ == mSqlDeal)
		{
			this->_runUpdateWhen(nValue, nName);
		}
		else if (mSqlDealUpdateThen_ == mSqlDeal)
		{
			this->_runUpdateThen(nValue, nName);
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

	void SqlFormat::_serialize(list<string>& nValue, const char * nName)
	{
		if (mSqlDealWhere_ == mSqlDeal)
		{
			this->_runWhere(nValue, nName);
		}
		else
		{
		}
	}

	void SqlFormat::_serialize(void * nValue, __i32 nLength, const char * nName, unsigned short nSqlFieldId)
	{
		if (mSqlDealCreate_ == mSqlDeal)
		{
			this->_runCreate(nValue, nName, "BLOB", nSqlFieldId);
		}
		else if (mSqlDealSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (mSqlDealInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nLength, nName);
		}
		else
		{
		}
	}

	const string& SqlFormat::_sqlCommand()
	{
		return mValue;
	}

	bool SqlFormat::_sqlParamter()
	{
		return (mSqlParamter.size() > 0);
	}

	void SqlFormat::_runInsert(string& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}
	
	void SqlFormat::_runInsert(void * nValue, __i32 nLength, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += "?";
		char * value_ = reinterpret_cast<char *>(nValue);
		SqlParamterPtr sqlParamter(new BlobSqlParamter(mIndex, value_, nLength));
		mIndex++;
		mSqlParamter.push_back(sqlParamter);
		if (mBeg)
		{
			mBeg = false;
		}
	}

	void SqlFormat::_runUpdate(string& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += "=";
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	void SqlFormat::_runUpdateWhen(string& nValue, const char * nName)
	{
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		mValue += " ";
	}

	void SqlFormat::_runUpdateThen(string& nValue, const char * nName)
	{
		if (mName == nName)
		{
			mValue += mValueCharacter;
			mValue += nValue;
			mValue += mValueCharacter;
		}
	}

	void SqlFormat::_runWhere(list<string>& nValue, const char * nName)
	{
		mValue += nName;
		mValue += "(";
		bool temp = false;
		list<string>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += ",";
			}
			mValue += mValueCharacter;
			mValue += (*it);
			mValue += mValueCharacter;
			temp = true;
		}
		mValue += ") ";
	}

	void SqlFormat::_runWhere(string& nValue, const char * nName)
	{
		mValue += nName;
		mValue += mValueCharacter;
		mValue += nValue;
		mValue += mValueCharacter;
		mValue += " ";
	}

	SqlFormat::SqlFormat()
	{
		mUpdate.clear();
		mSqlDeal = mSqlDealNone_;
		mValue = "";
		mName = "";
		mBeg = false;
		mEnd = false;
		mIndex = 1;
	}

	SqlFormat::~SqlFormat()
	{
		mUpdate.clear();
		mSqlDeal = mSqlDealNone_;
		mValue = "";
		mName = "";
		mBeg = false;
		mEnd = false;
		mIndex = 1;
	}

	string SqlFormat::mValueCharacter = "'";
	string SqlFormat::mFieldCharacter = "`";
	string SqlFormat::mUpdateCharacter = "@";

}
