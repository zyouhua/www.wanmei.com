#include "Include.h"

namespace std {

	void BinReader::_serialize( bool& nValue, const wchar_t * nName, bool nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(bool));
	}

	void BinReader::_serialize( __i8& nValue, const wchar_t * nName, __i8 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i8));
	}

	void BinReader::_serialize(list<__i8>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__i8));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __u8& nValue, const wchar_t * nName, __u8 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__u8));
	}

	void BinReader::_serialize(list<__u8>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__u8));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __i16& nValue, const wchar_t * nName, __i16 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i16));
	}

	void BinReader::_serialize(list<__i16>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__i16));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __u16& nValue, const wchar_t * nName, __u16 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i16));
	}

	void BinReader::_serialize(list<__u16>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__u16));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __i32& nValue, const wchar_t * nName, __i32 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i32));
	}

	void BinReader::_serialize(list<__i32>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__i32));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __u32& nValue, const wchar_t * nName, __u32 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i32));
	}

	void BinReader::_serialize(list<__u32>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__u32));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __i64& nValue, const wchar_t * nName, __i64 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__i64));
	}

	void BinReader::_serialize(list<__i64>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__i64));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( __u64& nValue, const wchar_t * nName, __u64 nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(__u64));
	}

	void BinReader::_serialize(list<__u64>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(__u64));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( wstring& nValue, const wchar_t * nName, const wchar_t * nOptimal )
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		nValue.resize(count_);
		mStream.read((char *)(&nValue[0]), sizeof(wchar_t) * count_);
	}

	void BinReader::_serialize(list<wstring>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			wstring str_;
			this->_serialize(str_, L"wstring");
			nValue.push_back(str_);
		}
	}

	void BinReader::_serialize( string& nValue, const wchar_t * nName, const char * nOptimal )
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		nValue.resize(count_);
		mStream.read(&nValue[0], count_);
	}

	void BinReader::_serialize(list<string>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			string str_;
			this->_serialize(str_, L"string");
			nValue.push_back(str_);
		}
	}

	void BinReader::_serialize( float& nValue, const wchar_t * nName, float nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(float));
	}

	void BinReader::_serialize(list<float>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		float value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(float));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize( double& nValue, const wchar_t * nName, double nOptimal )
	{
		mStream.read((char *)(&nValue), sizeof(double));
	}

	void BinReader::_serialize(list<double>& nValue, const wchar_t * nName)
	{
		__u16 count_ = 0;
		double value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		for (__u16 i = 0; i < count_; ++i)
		{
			value_ = 0;
			mStream.read((char *)(&value_), sizeof(double));
			nValue.push_back(value_);
		}
	}

	void BinReader::_serialize(char * nValue, __u32 nLength)
	{
		mStream.read(nValue, nLength);
	}

	void BinReader::_openUrl(const char * nUrl)
	{
		mStream.open(nUrl, ios::binary|ios::in);
	}

	void BinReader::_runSeek(__u32 nPos)
	{
		mStream.seekg(nPos, ios::beg);
	}

	void BinReader::_runClose()
	{
		mStream.close();
	}

	BinReader::BinReader()
	{
	}

	BinReader::~BinReader()
	{
	}

}