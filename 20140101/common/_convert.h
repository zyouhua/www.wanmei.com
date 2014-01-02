#pragma once

namespace std {

	namespace convert_namespace {

		template<typename __t1, typename __t2>
		struct Convert
		{
			const __t1 operator () (const __t2& nValue) const
			{
				__t1 result_ = boost::numeric_cast<__t1>(nValue);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<__t1, char *>
		{
			const __t1 operator () (const char * nValue) const
			{
				__t1 result_ = boost::lexical_cast<__t1>(nValue);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<__t1, string>
		{
			const __t1 operator () (const string& nValue) const
			{
				__t1 result_ = boost::lexical_cast<__t1>(nValue);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<__t1, wchar_t *>
		{
			const __t1 operator () (const wchar_t * nValue) const
			{
				__t1 result_ = boost::lexical_cast<__t1>(nValue);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<__t1, wstring>
		{
			const __t1 operator () (const wstring& nValue) const
			{
				__t1 result_ = boost::lexical_cast<__t1>(nValue);
				return result_;
			}
		};

		template<>
		struct Convert<bool, char *>
		{
			const bool operator () (const char * nValue) const
			{
				string value_(nValue);
				boost::trim(value_);
				if ("true" == value_)
				{
					return true;
				}
				return false;
			}
		};

		template<>
		struct Convert<bool, string>
		{
			const bool operator () (const string& nValue) const
			{
				string value_ = nValue;
				boost::trim(value_);
				if ("true" == value_)
				{
					return true;
				}
				return false;
			}
		};

		template<>
		struct Convert<bool, wchar_t *>
		{
			const bool operator () (const wchar_t * nValue) const
			{
				wstring value_(nValue);
				boost::trim(value_);
				if (L"true" == value_)
				{
					return true;
				}
				return false;
			}
		};

		template<>
		struct Convert<bool, wstring>
		{
			const bool operator () (const wstring& nValue) const
			{
				wstring value_(nValue);
				boost::trim(value_);
				if (L"true" == value_)
				{
					return true;
				}
				return false;
			}
		};

		template<>
		struct Convert<__i8, char *>
		{
			const __i8 operator () (const char * nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__i8 result_ = boost::numeric_cast<__i8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__i8, string>
		{
			const __i8 operator () (const string& nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__i8 result_ = boost::numeric_cast<__i8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__i8, wchar_t *>
		{
			const __i8 operator () (const wchar_t * nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__i8 result_ = boost::numeric_cast<__i8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__i8, wstring>
		{
			const __i8 operator () (const wstring& nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__i8 result_ = boost::numeric_cast<__i8>(result32_);
				return result_;
			}
		};

		//
		template<>
		struct Convert<__u8, char *>
		{
			const __i8 operator () (const char * nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__u8 result_ = boost::numeric_cast<__u8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__u8, string>
		{
			const __u8 operator () (const string& nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__u8 result_ = boost::numeric_cast<__u8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__u8, wchar_t *>
		{
			const __u8 operator () (const wchar_t * nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__u8 result_ = boost::numeric_cast<__u8>(result32_);
				return result_;
			}
		};

		template<>
		struct Convert<__u8, wstring>
		{
			const __u8 operator () (const wstring& nValue) const
			{
				__i32 result32_ = boost::lexical_cast<__i32>(nValue);
				__u8 result_ = boost::numeric_cast<__u8>(result32_);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<string, __t1>
		{
			const string operator () (const __t1& nValue) const
			{
				string result_ = boost::lexical_cast<string>(nValue);
				return result_;
			}
		};

		template<typename __t1>
		struct Convert<wstring, __t1>
		{
			const wstring operator () (const __t1& nValue) const
			{
				wstring result_ = boost::lexical_cast<wstring>(nValue);
				return result_;
			}
		};

		template<>
		struct Convert<string, bool>
		{
			const string operator () (const bool nValue) const
			{
				if (true == nValue)
				{
					return "true";
				}
				return "false";
			}
		};

		template<>
		struct Convert<wstring, bool>
		{
			const wstring operator () (const bool nValue) const
			{
				if (true == nValue)
				{
					return L"true";
				}
				return L"false";
			}
		};

		template<>
		struct Convert<string, wchar_t *>
		{
			const string operator () (const wchar_t * nValue) const
			{
				setlocale(LC_ALL, "");

				size_t bufSize_ = 0;
				size_t len_ = ::wcslen(nValue);
				wcstombs_s(&bufSize_, NULL, 0, nValue, len_);

				char * buf_ = new char[bufSize_];
				wcstombs_s(&bufSize_, buf_, bufSize_, nValue, len_);
				string result_(buf_, bufSize_);
				delete[] buf_;

				setlocale(LC_ALL, NULL);
				return result_;
			}
		};

		template<>
		struct Convert<string, wstring>
		{
			const string operator () (const wstring& nValue) const
			{
				setlocale(LC_ALL, "");

				size_t bufSize_ = 0;
				const wchar_t * value_ = nValue.c_str();
				size_t len_ = nValue.length();
				wcstombs_s(&bufSize_, NULL, 0, value_, len_);

				char * buf_ = new char[bufSize_];
				wcstombs_s(&bufSize_, buf_, bufSize_, value_, len_);
				string result_(buf_, bufSize_);
				delete[] buf_;

				setlocale(LC_ALL, NULL);
				return result_;
			}
		};


		template<>
		struct Convert<wstring, char *>
		{
			const wstring operator () (const char * nValue) const
			{
				setlocale(LC_ALL, "");

				size_t bufSize_ = 0;
				size_t len_ = ::strlen(nValue);
				mbstowcs_s(&bufSize_, NULL, 0, nValue, len_);

				wchar_t * buf_ = new wchar_t[bufSize_];
				mbstowcs_s(&bufSize_, buf_, bufSize_, nValue, len_);
				wstring result_(buf_, bufSize_);
				delete[] buf_;

				setlocale(LC_ALL, NULL);

				return result_;
			}
		};

		template<>
		struct Convert<wstring, string>
		{
			const wstring operator () (const string& nValue) const
			{
				setlocale(LC_ALL, "");

				size_t bufSize_ = 0;
				const char * value_ = nValue.c_str();
				size_t len_ = nValue.length();
				mbstowcs_s(&bufSize_, NULL, 0, value_, len_);

				wchar_t * buf_ = new wchar_t[bufSize_];
				mbstowcs_s(&bufSize_, buf_, bufSize_, value_, len_);
				wstring result_(buf_, bufSize_);
				delete[] buf_;

				setlocale(LC_ALL, NULL);

				return result_;
			}
		};

	}

	template<typename __t1, typename __t2>
	const __t1 _convert(const __t2& nValue)
	{
		return convert_namespace::Convert<__t1, __t2>()(nValue);
	}

}
