#pragma once

namespace std {
	
	class SqlFormat;

	class ISqlHeadstream
	{
	public:
		virtual void _runSelect(SqlFormat * nSqlFormat) = 0;

		virtual void _runWhere(SqlFormat * nSqlFormat) = 0;

		virtual const wchar_t * _tableName() = 0;

		virtual SqlType_ _sqlType() = 0;
	};

	typedef shared_ptr<ISqlHeadstream> SqlHeadstreamPtr;

}
