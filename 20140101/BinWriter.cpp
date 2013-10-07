#include "Include.h"

namespace std {

	void BinWriter::_serialize( bool& nValue, const wchar_t * nName, bool nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(bool));
	}

	void BinWriter::_serialize( __i8& nValue, const wchar_t * nName, __i8 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__i8));
	}

	void BinWriter::_serialize(list<__i8>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__i8>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__i8 t_ = (*it);
			this->_serialize(t_, L"__i8");
		}
	}

	void BinWriter::_serialize( __u8& nValue, const wchar_t * nName, __u8 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__u8));
	}

	void BinWriter::_serialize(list<__u8>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__u8>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__u8 t_ = (*it);
			this->_serialize(t_, L"__u8");
		}
	}

	void BinWriter::_serialize( __i16& nValue, const wchar_t * nName, __i16 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__i16));
	}

	void BinWriter::_serialize(list<__i16>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__i16>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__i16 t_ = (*it);
			this->_serialize(t_, L"__i16");
		}
	}

	void BinWriter::_serialize( __u16& nValue, const wchar_t * nName, __u16 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__u16));
	}

	void BinWriter::_serialize(list<__u16>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__u16>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__u16 t_ = (*it);
			this->_serialize(t_, L"__u16");
		}
	}

	void BinWriter::_serialize( __i32& nValue, const wchar_t * nName, __i32 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__i32));
	}

	void BinWriter::_serialize(list<__i32>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__i32>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__i32 t_ = (*it);
			this->_serialize(t_, L"__i32");
		}
	}

	void BinWriter::_serialize( __u32& nValue, const wchar_t * nName, __u32 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__u32));
	}

	void BinWriter::_serialize(list<__u32>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__u32>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__u32 t_ = (*it);
			this->_serialize(t_, L"__u32");
		}
	}

	void BinWriter::_serialize( __i64& nValue, const wchar_t * nName, __i64 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__i64));
	}

	void BinWriter::_serialize(list<__i64>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__i64>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__i64 t_ = (*it);
			this->_serialize(t_, L"__i64");
		}
	}

	void BinWriter::_serialize( __u64& nValue, const wchar_t * nName, __u64 nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(__u64));
	}

	void BinWriter::_serialize(list<__u64>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<__u64>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			__u64 t_ = (*it);
			this->_serialize(t_, L"__u64");
		}
	}

	void BinWriter::_serialize( wstring& nValue, const wchar_t * nName, const wchar_t * nOptimal )
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		mStream.write((char *)(&nValue[0]), sizeof(wchar_t) * count_);
	}

	void BinWriter::_serialize(list<wstring>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<wstring>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			wstring& t_ = (*it);
			this->_serialize(t_, L"wstring");
		}
	}

	void BinWriter::_serialize( string& nValue, const wchar_t * nName, const char * nOptimal )
	{
		__u16 count_ = 0;
		__i8 value_ = 0;
		mStream.read((char *)(&count_), sizeof(__u16));
		nValue.resize(count_);
		mStream.read(&nValue[0], count_);
	}

	void BinWriter::_serialize(list<string>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<string>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			string& t_ = (*it);
			this->_serialize(t_, L"string");
		}
	}

	void BinWriter::_serialize( float& nValue, const wchar_t * nName, float nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(float));
	}

	void BinWriter::_serialize(list<float>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<float>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			float t_ = (*it);
			this->_serialize(t_, L"float");
		}
	}

	void BinWriter::_serialize( double& nValue, const wchar_t * nName, double nOptimal )
	{
		mStream.write((char *)(&nValue), sizeof(double));
	}

	void BinWriter::_serialize(list<double>& nValue, const wchar_t * nName)
	{
		__u16 count_ = static_cast<__u16>(nValue.size());
		mStream.write((char *)(&count_), sizeof(__u16));
		list<double>::iterator it = nValue.begin();
		for ( ; it != nValue.end(); ++it )
		{
			double t_ = (*it);
			this->_serialize(t_, L"double");
		}
	}

	void BinWriter::_serialize(char * nValue, __u32 nLength)
	{
		mStream.write(nValue, nLength);
	}

	void BinWriter::_openUrl(const char * nUrl)
	{
		mStream.open(nUrl, ios::binary|ios::out);
	}

	void BinWriter::_runSeek(__u32 nPos)
	{
		mStream.seekp(nPos, ios::beg);
	}

	__u32 BinWriter::_runTell()
	{
		return static_cast<__u32>(mStream.tellp());
	}

	void BinWriter::_runClose()
	{
		mStream.close();
	}

	BinWriter::BinWriter()
	{
	}

	BinWriter::~BinWriter()
	{
	}

}