#pragma once

namespace std {

	class SqlFormat;

	class ISqlStream
	{
	public:
		virtual void _runSelect(SqlFormat nSqlFormat) = 0;

		virtual void _runWhen(SqlFormat nSqlFormat) = 0;
	};

}
