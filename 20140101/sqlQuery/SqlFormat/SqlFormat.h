#pragma once

namespace std {

	class SqlFormat
	{
	public:
		void _serialize(bool& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(char& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<char>& nValue, const wchar_t * nName);

		void _serialize(unsigned char& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned char>& nValue, const wchar_t * nName);

		void _serialize(short& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<short>& nValue, const wchar_t * nName);

		void _serialize(unsigned short& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned short>& nValue, const wchar_t * nName);

		void _serialize(long& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<long>& nValue, const wchar_t * nName);

		void _serialize(unsigned long& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned long>& nValue, const wchar_t * nName);

		void _serialize(long long& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<long long>& nValue, const wchar_t * nName);

		void _serialize(unsigned long long& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<unsigned long long>& nValue, const wchar_t * nName);

		void _serialize(float& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<float>& nValue, const wchar_t * nName);

		void _serialize(double& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<double>& nValue, const wchar_t * nName);

		void _serialize(wstring& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<wstring>& nValue, const wchar_t * nName);

		void _serialize(string& nValue, const wchar_t * nName, unsigned short nSqlFieldId = mSqlFieldIdNone_);

		void _serialize(list<string>& nValue, const wchar_t * nName);

		void _addHeadstream(SqlHeadstreamPtr& nSqlHeadstreams);

		const wstring& _sqlCommand();

		template<class __t>
		void _serialize(list<__t>& nValue, const wchar_t * nName);

	private:
		template <typename __t>
		void _runCreate(__t& nValue, const wchar_t * nName, const wchar_t * nType, int nSqlFieldId);

		template <typename __t>
		void _runSelect(__t& nValue, const wchar_t * nName);

		template <typename __t>
		void _runSelect(list<__t>& nValue, const wchar_t * nName);

		template <typename __t>
		void _runInsert(list<__t>& nValue, const wchar_t * nName);

		template <typename __t>
		void _runInsert(__t& nValue, const wchar_t * nName);

		void _runInsert(wstring& nValue, const wchar_t * nName);

		template <typename __t>
		void _runUpdate(list<__t>& nValue, const wchar_t * nName);

		template <typename __t>
		void _runUpdate(__t& nValue, const wchar_t * nName);

		void _runUpdate(wstring& nValue, const wchar_t * nName);

		template <typename __t>
		void _runInsertUpdate(list<__t>& nValue, const wchar_t * nName);

		template <typename __t>
		void _runInsertUpdate(__t& nValue, const wchar_t * nName);

		template <typename __t>
		void _runWhere(list<__t>& nValue, const wchar_t * nName);

		void _runWhere(list<wstring>& nValue, const wchar_t * nName);

		template <typename __t>
		void _runWhere(__t& nValue, const wchar_t * nName);

		void _runWhere(wstring& nValue, const wchar_t * nName);

		template <typename __t>
		void _runPrimary(__t& nValue, const wchar_t * nName);

		void _runFormat(SqlHeadstreamPtr& nSqlHeadstream);

		void _runCreate(SqlHeadstreamPtr& nSqlHeadstream);

		void _runSelect(SqlHeadstreamPtr& nSqlHeadstream);

		void _runInsert(SqlHeadstreamPtr& nSqlHeadstream);

		void _runUpdate(SqlHeadstreamPtr& nSqlHeadstream);

		void _runInsertUpdate(SqlHeadstreamPtr& nSqlHeadstream);

		void _runDelete(SqlHeadstreamPtr& nSqlHeadstream);

	public:
		SqlFormat();

		~SqlFormat();

	private:
		list<SqlHeadstreamPtr> mSqlHeadstreams;
		list<wstring> mUpdate;
		SqlDeal_ mSqlDeal;
		wstring mValue;
		wstring mName;
		bool mBeg;
		bool mEnd;

	private:
		static wstring mValueCharacter;
		static wstring mFieldCharacter;
		static wstring mUpdateCharacter;
	};

	template<class __t>
	void SqlFormat::_serialize(list<__t>& nValue, const wchar_t * nName)
	{
		if (SqlDeal_.mSelect_ == mSqlDeal)
		{
			this->_runSelect(nValue, nName);
		}
		else if (SqlDeal_.mInsert_ == mSqlDeal)
		{
			this->_runInsert(nValue, nName);
		}
		else if (SqlDeal_.mInsertUpdate_ == mSqlDeal)
		{
			this->_runInsertUpdate(nValue, nName);
		}
		else if (SqlDeal_.mUpdate_ == mSqlDeal)
		{
			this->_runUpdate(nValue, nName);
		}
		else
		{
		}
	}

	template <typename __t>
	void SqlFormat::_runCreate(__t& nValue, const wchar_t * nName, const wchar_t * nType, int nSqlFieldId)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += L" ";
		mValue += nType;
		if ((nSqlFieldId & mSqlFieldIdZeroFill_) > 0)
		{
			mValue += L" ZEROFILL";
		}
		if ((nSqlFieldId & mSqlFieldIdBinary_) > 0)
		{
			mValue += L" BINARY";
		}
		if ((nSqlFieldId & mSqlFieldIdNotNull_) > 0)
		{
			mValue += L" NOT NULL";
		}
		if ((nSqlFieldId & mSqlFieldIdAutoIncremet_) > 0)
		{
			mValue += L" AUTO_INCREMENT";
		}
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template<class __t>
	void SqlFormat::_runSelect(__t& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
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
	void SqlFormat::_runSelect(list<__t>& nValue, const wchar_t * nName)
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
	void SqlFormat::_runInsert(list<__t>& nValue, const wchar_t * nName)
	{
		bool temp = false;
		list<__t>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += L"),(";
				mBeg = true;
			}
			it->_runSelect(this);
			temp = true;
		}
	}

	template <typename __t>
	void SqlFormat::_runInsert(__t& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		mValue += mValueCharacter;
		mValue += _convert<wstring, __t>(nValue);
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runUpdate(list<__t>& nValue, const wchar_t * nName)
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
				mValue += L",";
			}
			mValue += mFieldCharacter;
			mValue += mName;
			mValue += mFieldCharacter;
			mValue += L"= CASE ";
			mSqlDeal = mSqlDealSelect_;
			mBeg = true;
			if (it != nValue.end())
			{
				it->_runWhen(this);
			}
			for ( ; it != nValue.end(); ++it )
			{
				mSqlDeal = mSqlDealUpdateWhen_;
				mValue += L" WHEN ";
				it->_runWhen(this);
				mSqlDeal = mSqlDealUpdateThen_;
				mValue += L"THEN ";
				it->_runSelect(this);
			}
			mValue += L" END";
			if (temp_)
			{
				temp_ = false;
			}
		}
		mValue += L" WHERE ";
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
		mValue += L" IN (";
		for ( ; it != nValue.end(); ++it )
		{
			it->_runWhen(this);
		}
		mValue += L")";
	}

	template <typename __t>
	void SqlFormat::_runUpdate(__t& nValue, const wchar_t * nName)
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
		mValue += _convert<wstring, __t>(nValue);
		mValue += mValueCharacter;
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runInsertUpdate(list<__t>& nValue, const wchar_t * nName)
	{
		mValue += L"ON DUPLICATE KEY UPDATE ";
		mBeg = true;
		list<__t>::iterator it = nValue.begin();
		if (it != list<__t>.end())
		{
			it->._runSelect(this);
		}
	}

	template <typename __t>
	void SqlFormat::_runInsertUpdate(__t& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += L"=VALUES(";
		mValue += mFieldCharacter;
		mValue += nName;
		mValue += mFieldCharacter;
		mValue += L")";
		if (mBeg)
		{
			mBeg = false;
		}
	}

	template <typename __t>
	void SqlFormat::_runWhere(list<__t>& nValue, const wchar_t * nName)
	{
		mValue += nName;
		mValue += L"(";
		bool temp = false;
		list<__t>::iterator it = nValue.begin();
		for ( ; it!= nValue.end(); ++it )
		{
			if (temp)
			{
				mValue += L",";
			}
			mValue += mValueCharacter;
			mValue += _convert<wstring, __t>(*it);
			mValue += mValueCharacter;
			temp = true;
		}
		mValue += L") ";
	}

	template <typename __t>
	void SqlFormat::_runWhere(__t& nValue, const wchar_t * nName)
	{
		mValue += nName;
		mValue += mValueCharacter;
		mValue += _convert<wstring, __t>(nValue);
		mValue += mValueCharacter;
		mValue += L" ";
	}

	template <typename __t>
	void SqlFormat::_runPrimary(__t& nValue, const wchar_t * nName)
	{
		if (false == mBeg)
		{
			mValue += L",";
		}
		else
		{
			mValue += L", PRIMARY KEY (";
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

}
