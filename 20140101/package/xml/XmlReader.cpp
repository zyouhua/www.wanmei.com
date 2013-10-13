#include "../PackageInc-.h"

namespace std {

	void XmlReader::_serialize( bool& nValue, const char * nName, bool nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<bool, char *>(text_);
		}
	}

	void XmlReader::_serialize( __i8& nValue, const char * nName, __i8 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__i8, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i8>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__i8 value_ = _convert<__i8, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u8& nValue, const char * nName, __u8 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__u8, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u8>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__u8 value_ = _convert<__u8, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i16& nValue, const char * nName, __i16 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__i16, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i16>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__i16 value_ = _convert<__i16, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u16& nValue, const char * nName, __u16 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__u16, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u16>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__u16 value_ = _convert<__u16, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i32& nValue, const char * nName, __i32 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__i32, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i32>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__i32 value_ = _convert<__i32, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u32& nValue, const char * nName, __u32 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__u32, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u32>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__u32 value_ = _convert<__u32, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i64& nValue, const char * nName, __i64 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__i64, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i64>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__i64 value_ = _convert<__i64, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u64& nValue, const char * nName, __u64 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<__u64, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u64>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			__u64 value_ = _convert<__u64, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( wstring& nValue, const char * nName, const wchar_t * nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<wstring, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<wstring>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			wstring value_ = _convert<wstring, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( string& nValue, const char * nName, const char * nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			nValue = xmlAttribute_->value();
		}
	}

	void XmlReader::_serialize(list<string>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			string value_ = xmlNode_->value();
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( float& nValue, const char * nName, float nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<float, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<float>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			float value_ = _convert<float, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( double& nValue, const char * nName, double nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<char> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr != xmlAttribute_)
		{
			char * text_ = xmlAttribute_->value();
			nValue = _convert<double, char *>(text_);
		}
	}

	void XmlReader::_serialize(list<double>& nValue, const char * nName)
	{
		xml_node<char> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			char * text_ = xmlNode_->value();
			double value_ = _convert<double, char *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_openUrl(const char * nUrl)
	{
		char * buf_ = nullptr;
		__u32 size_ = 0;
		MpqReader& mpqReader_ = __singleton<MpqReader>::_instance();
		mpqReader_._readKey(nUrl, &buf_, &size_);
		mXmlDocument.parse<0>(buf_);
	}

	__i32 XmlReader::_pushStream( const char * nName )
	{
		mXmlNodes.push(mXmlNode);
		return 0;
	}
	
	void XmlReader::_selectStream(const char * nStreamName)
	{
		mXmlNode = mXmlDocument.first_node();
	}

	void XmlReader::_popStream()
	{
		mXmlNode = mXmlNodes.top();
		mXmlNodes.pop();
	}

	void XmlReader::_runClose()
	{
	}

	XmlReader::XmlReader()
		: mXmlDocument()
		, mXmlNode(nullptr)
		, mXmlNodes()
	{
	}

	XmlReader::~XmlReader()
	{
		mXmlDocument.clear();
		mXmlNode = nullptr;
	}

}