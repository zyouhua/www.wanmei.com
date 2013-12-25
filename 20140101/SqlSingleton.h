#pragma once

namespace std {

	class SqlSingleton
	{
	public:
		SqlConnectionPtr _getConnection();
		void _runInit();

	public:
		const wchar_t * _streamName();

	private:
		SqlConnectionPtr _createSqlConnection();

		template<class __t>
		void _serialize(__t * nT);

	public:
		SqlSingleton();
		~SqlSingleton();

	private:
		Driver * mDriver;
		string mHostName;
		string mUserName;
		string mPassward;
	};

	template<class __t>
	void SqlSingleton::_serialize(__t * nT)
	{
		nT->_serialize(mHostName, L"hostName");
		nT->_serialize(mUserName, L"userName");
		nT->_serialize(mPassward, L"passward");
	}

}
