#pragma once

namespace std {

	class SqlFormat
	{
	public:
		void _serialize(bool& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(char& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<char>& nValue, const char * nName);

		void _serialize(unsigned char& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned char>& nValue, const char * nName);

		void _serialize(short& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<short>& nValue, const char * nName);

		void _serialize(unsigned short& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned short>& nValue, const char * nName);

		void _serialize(long& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<long>& nValue, const char * nName);

		void _serialize(unsigned long& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned long>& nValue, const char * nName);

		void _serialize(long long& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<long long>& nValue, const char * nName);

		void _serialize(unsigned long long& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned long long>& nValue, const char * nName);

		void _serialize(float& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<float>& nValue, const char * nName);

		void _serialize(double& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<double>& nValue, const char * nName);

		void _serialize(wstring& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<wstring>& nValue, const char * nName);

		void _serialize(string& nValue, const char * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<string>& nValue, const char * nName);

		template<class __t>
		void _addHeadstream(__t& nSqlHeadstreams);

		const string& _sqlCommand();

		bool _sqlParamter();

		template<class __t>
		void _serialize(list<__t>& nValue, const char * nName);

	private:
		template <typename __t>
		void _runCreate(__t& nValue, const char * nName, const char * nType, int nSqlFieldId);

		template <typename __t>
		void _runSelect(__t& nValue, const char * nName);

		template <typename __t>
		void _runSelect(list<__t>& nValue, const char * nName);

		template <typename __t>
		void _runInsert(list<__t>& nValue, const char * nName);

		template <typename __t>
		void _runInsert(__t& nValue, const char * nName);

		void _runInsert(string& nValue, const char * nName);

		template <typename __t>
		void _runUpdate(list<__t>& nValue, const char * nName);

		template <typename __t>
		void _runUpdate(__t& nValue, const char * nName);

		void _runUpdate(string& nValue, const char * nName);

		template <typename __t>
		void _runUpdateSelect(__t& nValue, const char * nName);
		
		template <typename __t>
		void _runUpdateWhen(__t& nValue, const char * nName);

		void _runUpdateWhen(string& nValue, const char * nName);

		template <typename __t>
		void _runUpdateThen(__t& nValue, const char * nName);

		void _runUpdateThen(string& nValue, const char * nName);

		template <typename __t>
		void _runInsertUpdate(list<__t>& nValue, const char * nName);

		template <typename __t>
		void _runInsertUpdate(__t& nValue, const char * nName);

		template <typename __t>
		void _runWhere(list<__t>& nValue, const char * nName);

		void _runWhere(list<string>& nValue, const char * nName);

		template <typename __t>
		void _runWhere(__t& nValue, const char * nName);

		void _runWhere(string& nValue, const char * nName);

		template <typename __t>
		void _runPrimary(__t& nValue, const char * nName);

		template <typename __t>
		void _runFormat(__t& nSqlHeadstream);

		template <typename __t>
		void _runCreate(__t& nSqlHeadstream);

		template <typename __t>
		void _runSelect(__t& nSqlHeadstream);

		template <typename __t>
		void _runInsert(__t& nSqlHeadstream);

		template <typename __t>
		void _runUpdate(__t& nSqlHeadstream);

		template <typename __t>
		void _runInsertUpdate(__t& nSqlHeadstream);

		template <typename __t>
		void _runDelete(__t& nSqlHeadstream);

	public:
		SqlFormat();

		~SqlFormat();

	private:
		friend class SqlConnection;
		list<SqlParamterPtr> mSqlParamter;
		list<string> mUpdate;
		SqlDeal_ mSqlDeal;
		string mValue;
		string mName;
		bool mBeg;
		bool mEnd;

	private:
		static string mValueCharacter;
		static string mFieldCharacter;
		static string mUpdateCharacter;
	};

	template<class __t>
	void SqlFormat::_addHeadstream(__t& nSqlHeadstreams)
	{
		this->_runFormat(nSqlHeadstreams);
	}

	template<class __t>
	void SqlFormat::_serialize(list<__t>& nValue, const char * nName)
	{
		if (mSqlDealSelect_ == mSqlDeal)
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
		else
		{
		}
	}

	template <typename __t>
	void SqlFormat::_runCreate(__t& nValue, const char * nName, const char * nType, int nSqlFieldId)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += " ";
		mValue += nType;
		if ((nSqlFieldId & mSqlFieldIdZeroFill_) > 0)
		{
			mValue += " ZEROFILL";
		}
		if ((nSqlFieldId & mSqlFieldIdBinary_) > 0)
		{
			mValue += " BINARY";
		}
		if ((nSqlFieldId & mSqlFieldIdNotNull_) > 0)
		{
			mValue += " NOT NULL";
		}
		if ((nSqlFieldId & mSqlFieldIdAutoIncremet_) > 0)
		{
			mValue += " AUTO_INCREMENT";
		}
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template<class __t>
	void SqlFormat::_runSelect(__t& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runSelect(list<__t>& nValue, const char * nName)
	{
		list<__t>::iterator it = nValue.begin();
		if (it != nValue.end())
		{
			it->_runSelect(this);
		}
		else
		{
			__t t_;
			t_._runSelect(this);
		}
	}

	template <typename __t>
	void SqlFormat::_runInsert(list<__t>& nValue, const char * nName)
	{
		bool temp = false;
		list<__t>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += "),(";
				mBeg = true;
			}
			it->_runSelect(this);
			temp = true;
		}
	}

	template <typename __t>
	void SqlFormat::_runInsert(__t& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mValueCharacter;
		mValue += _convert<string, __t>(nValue);
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runUpdate(list<__t>& nValue, const char * nName)
	{
		mUpdate.Clear();
		mSqlDeal = mSqlDealUpdateSelect_;
		list<__t>::iterator it = nValue.begin();
		if (it != nValue.end())
		{
			it->_runSelect(this);
		}
		bool temp_ = true;
		list<__t>::iterator it1 = mUpdate.begin();
		for ( ; it1 != mUpdate.end(); ++it )
		{
			mName = (*it);
			if (false == temp_)
			{
				mValue += ",";
			}
			mValue += mFieldCharacter;
			mValue += mName;
			mValue += mFieldCharacter;
			mValue += "= CASE ";
			mSqlDeal = mSqlDealSelect_;
			mBeg = true;
			if (it != nValue.end())
			{
				it->_runWhen(this);
			}
			for ( ; it != nValue.end(); ++it )
			{
				mSqlDeal = mSqlDealUpdateWhen_;
				mValue += " WHEN ";
				it->_runWhen(this);
				mSqlDeal = mSqlDealUpdateThen_;
				mValue += "THEN ";
				it->_runSelect(this);
			}
			mValue += " END";
			if (temp_)
			{
				temp_ = false;
			}
		}
		mValue += " WHERE ";
		mSqlDeal = mSqlDealSelect_;
		mBeg = true;
		it = nValue.begin();
		if (it != nValue.end())
		{
			i._runWhen(this);
			break;
		}
		mSqlDeal = mSqlDealInsert_;
		mBeg = true;
		mValue += " IN (";
		for ( ; it != nValue.end(); ++it )
		{
			it->_runWhen(this);
		}
		mValue += ")";
	}

	template <typename __t>
	void SqlFormat::_runUpdate(__t& nValue, const char * nName)
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
		mValue += _convert<string, __t>(nValue);
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runUpdateSelect(__t& nValue, const char * nName)
	{
		mUpdate.push_back(nName);
	}

	template <typename __t>
	void SqlFormat::_runUpdateWhen(__t& nValue, const char * nName)
	{
		mValue += mValueCharacter;
		mValue += _convert<string, __t>(nValue);
		mValue += mValueCharacter;
		mValue += " ";
	}

	template <typename __t>
	void SqlFormat::_runUpdateThen(__t& nValue, const char * nName)
	{
		if (mName == nName)
		{
			mValue += mValueCharacter;
			mValue += _convert<string, __t>(nValue);
			mValue += mValueCharacter;
		}
	}

	template <typename __t>
	void SqlFormat::_runInsertUpdate(list<__t>& nValue, const char * nName)
	{
		mValue += "ON DUPLICATE KEY UPDATE ";
		mBeg = true;
		list<__t>::iterator it = nValue.begin();
		if (it != list<__t>.end())
		{
			it->._runSelect(this);
		}
	}

	template <typename __t>
	void SqlFormat::_runInsertUpdate(__t& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += "=VALUES(";
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += ")";
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runWhere(list<__t>& nValue, const char * nName)
	{
		mValue += nName;
		mValue += "(";
		bool temp = false;
		list<__t>::iterator it = nValue.begin();
		for ( ; it!= nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += ",";
			}
			mValue += mValueCharacter;
			mValue += _convert<string, __t>(*it);
			mValue += mValueCharacter;
			temp = true;
		}
		mValue += ") ";
	}

	template <typename __t>
	void SqlFormat::_runWhere(__t& nValue, const char * nName)
	{
		mValue += nName;
		mValue += mValueCharacter;
		mValue += _convert<string, __t>(nValue);
		mValue += mValueCharacter;
		mValue += " ";
	}

	template <typename __t>
	void SqlFormat::_runPrimary(__t& nValue, const char * nName)
	{
		if (false == mBeg)
		{
			mValue += ",";
		}
		else
		{
			mValue += ", PRIMARY KEY (";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mEnd = true;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runFormat(__t& nSqlHeadstream)
	{
		SqlType_ sqlType_ = nSqlHeadstream._sqlType();
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
		else if (mSqlTypeInsertUpdateEx_ == sqlType_)
		{
			this._runInsertUpdateEx(nSqlHeadstream);
		}
		else if (mSqlTypeDelete_ == sqlType_)
		{
			this->_runDelete(nSqlHeadstream);
		}
		else
		{
		}
	}

	template <typename __t>
	void SqlFormat::_runCreate(__t& nSqlHeadstream)
	{
		mValue += "CREATE TABLE ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += "(";
		mBeg = true;
		mSqlDeal = mSqlDealCreate_;
		nSqlHeadstream._runSelect(this);
		mBeg = true;
		mEnd = false;
		mSqlDeal = mSqlDealPrimary_;
		nSqlHeadstream._runSelect(this);
		if (mEnd)
		{
			mValue += ")";
		}
		mValue += ")ENGINE=MYISAM DEFAULT CHARSET=utf8;";
		mSqlDeal = mSqlDealNone_;
	}

	template <typename __t>
	void SqlFormat::_runSelect(__t& nSqlHeadstream)
	{
		mValue += "SELECT ";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream._runSelect(this);
		mValue += " FROM ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += " ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream._runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	template <typename __t>
	void SqlFormat::_runInsert(__t& nSqlHeadstream)
	{
		mValue += "INSERT INTO ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += " (";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream._runSelect(this);
		mValue += ") VALUES (";
		mBeg = true;
		mSqlDeal = mSqlDealInsert_;
		nSqlHeadstream._runSelect(this);
		mValue += ") ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream._runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	template <typename __t>
	void SqlFormat::_runUpdate(__t& nSqlHeadstream)
	{
		mValue += "UPDATE ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += " SET ";
		mBeg = true;
		mSqlDeal = mSqlDealUpdate_;
		nSqlHeadstream._runSelect(this);
		mSqlDeal = mSqlDealWhere_;
		mValue += " ";
		nSqlHeadstream._runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	template <typename __t>
	void SqlFormat::_runInsertUpdate(__t& nSqlHeadstream)
	{
		mValue += "INSERT INTO ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += " (";
		mBeg = true;
		mSqlDeal = mSqlDealSelect_;
		nSqlHeadstream._runSelect(this);
		mValue += ") VALUES (";
		mBeg = true;
		mSqlDeal = mSqlDealInsert_;
		nSqlHeadstream._runSelect(this);
		mValue += ") ";
		mSqlDeal = mSqlDealInsertUpdate_;
		nSqlHeadstream._runSelect(this);
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream._runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}

	template <typename __t>
	void SqlFormat::_runDelete(__t& nSqlHeadstream)
	{
		mValue = "DELETE FROM ";
		mValue += mFieldCharacter;
		mValue += nSqlHeadstream._tableName();
		mValue += mFieldCharacter;
		mValue += " ";
		mSqlDeal = mSqlDealWhere_;
		nSqlHeadstream._runWhere(this);
		mSqlDeal = mSqlDealNone_;
	}
}
