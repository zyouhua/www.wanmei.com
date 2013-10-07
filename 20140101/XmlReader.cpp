#include "Include.h"

namespace std {

	void XmlReader::_serialize( bool& nValue, const wchar_t * nName, bool nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<bool, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize( __i8& nValue, const wchar_t * nName, __i8 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__i8, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i8>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__i8 value_ = _convert<__i8, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u8& nValue, const wchar_t * nName, __u8 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__u8, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u8>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__u8 value_ = _convert<__u8, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i16& nValue, const wchar_t * nName, __i16 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__i16, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i16>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__i16 value_ = _convert<__i16, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u16& nValue, const wchar_t * nName, __u16 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__u16, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u16>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__u16 value_ = _convert<__u16, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i32& nValue, const wchar_t * nName, __i32 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__i32, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i32>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__i32 value_ = _convert<__i32, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u32& nValue, const wchar_t * nName, __u32 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__u32, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u32>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__u32 value_ = _convert<__u32, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __i64& nValue, const wchar_t * nName, __i64 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__i64, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__i64>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__i64 value_ = _convert<__i64, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( __u64& nValue, const wchar_t * nName, __u64 nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<__u64, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<__u64>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			__u64 value_ = _convert<__u64, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( wstring& nValue, const wchar_t * nName, const wchar_t * nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			nValue = xmlAttribute_->value();
		}
	}

	void XmlReader::_serialize(list<wstring>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wstring value_ = xmlNode_->value();
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( string& nValue, const wchar_t * nName, const char * nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<string, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<string>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			string value_ = _convert<string, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( float& nValue, const wchar_t * nName, float nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<float, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<float>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			float value_ = _convert<float, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_serialize( double& nValue, const wchar_t * nName, double nOptimal )
	{
		nValue = nOptimal;
		xml_attribute<wchar_t> * xmlAttribute_ = mXmlNode->first_attribute(nName);
		if (nullptr == xmlAttribute_)
		{
			wchar_t * text_ = xmlAttribute_->value();
			nValue = _convert<double, wchar_t *>(text_);
		}
	}

	void XmlReader::_serialize(list<double>& nValue, const wchar_t * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			wchar_t * text_ = xmlNode_->value();
			double value_ = _convert<double, wchar_t *>(text_);
			nValue.push_back(value_);
		}
	}

	void XmlReader::_openUrl(const wstring& nUrl)
	{
	}

	__i32 XmlReader::_pushStream( const wchar_t * nName )
	{
		mXmlNodes.push(mXmlNode);
		return 0;
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