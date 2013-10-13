#pragma once

namespace std {

	class XmlReader : public noncopyable
	{
	public:
		void _serialize(bool& nValue, const char * nName, bool nOptimal = false);
		void _serialize(__i8& nValue, const char * nName, __i8 nOptimal = 0);
		void _serialize(list<__i8>& nValue, const char * nName);
		void _serialize(__u8& nValue, const char * nName, __u8 nOptimal = 0);
		void _serialize(list<__u8>& nValue, const char * nName);
		void _serialize(__i16& nValue, const char * nName, __i16 nOptimal = 0);
		void _serialize(list<__i16>& nValue, const char * nName);
		void _serialize(__u16& nValue, const char * nName, __u16 nOptimal = 0);
		void _serialize(list<__u16>& nValue, const char * nName);
		void _serialize(__i32& nValue, const char * nName, __i32 nOptimal = 0);
		void _serialize(list<__i32>& nValue, const char * nName);
		void _serialize(__u32& nValue, const char * nName, __u32 nOptimal = 0);
		void _serialize(list<__u32>& nValue, const char * nName);
		void _serialize(__i64& nValue, const char * nName, __i64 nOptimal = 0);
		void _serialize(list<__i64>& nValue, const char * nName);
		void _serialize(__u64& nValue, const char * nName, __u64 nOptimal = 0);
		void _serialize(list<__u64>& nValue, const char * nName);
		void _serialize(wstring& nValue, const char * nName, const wchar_t * nOptimal = L"");
		void _serialize(list<wstring>& nValue, const char * nName);
		void _serialize(string& nValue, const char * nName, const char * nOptimal = "");
		void _serialize(list<string>& nValue, const char * nName);
		void _serialize(float& nValue, const char * nName, float nOptimal = 0.f);
		void _serialize(list<float>& nValue, const char * nName);
		void _serialize(double& nValue, const char * nName, double nOptimal = 0.);
		void _serialize(list<double>& nValue, const char * nName);
		template<class __t>
		void _serialize(__t * nValue, const char * nName);
		template<class __t>
		void _serialize(__t& nValue, const char * nName);
		template<class __t>
		void _serialize(list<__t *> nValue, const char * nName);
		template<class __t>
		void _serialize(shared_ptr<__t> nValue, const char * nName);
		template<class __t>
		void _serialize(list<shared_ptr<__t>> nValue, const char * nName);
		void _openUrl(const char * nUrl);
		__i32 _pushStream(const char * nName);
		void _selectStream(const char * nStreamName);
		void _popStream();
		void _runClose();
	public:
		XmlReader();
		~XmlReader();
	private:
		xml_document<char> mXmlDocument;
		xml_node<char> * mXmlNode;
		stack<xml_node<char> *> mXmlNodes;
	};
	template<class __t>
	void XmlReader::_serialize(__t * nValue, const char * nName)
	{
		mXmlNodes.push(mXmlNode);
		mXmlNode = mXmlNode->first_node(nName);
		if (nullptr != mXmlNode)
		{
			nValue->_serialize(this);
		}
		mXmlNode = mXmlNodes.top();
		mXmlNodes.pop();
	}

	template<class __t>
	void XmlReader::_serialize(__t& nValue, const char * nName)
	{
		mXmlNodes.push(mXmlNode);
		mXmlNode = mXmlNode->first_node(nName);
		if (nullptr != mXmlNode)
		{
			nValue._serialize(this);
		}
		mXmlNode = mXmlNodes.top();
		mXmlNodes.pop();
	}

	template<class __t>
	void XmlReader::_serialize(list<__t *> nValue, const char * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			mXmlNode = xmlNode_;
			__t * t_ = new __t();
			t_->_serialize(this);
			nValue.push_back(t_);
		}
	}

	template<class __t>
	void XmlReader::_serialize(shared_ptr<__t> nValue, const char * nName)
	{
		mXmlNodes.push(mXmlNode);
		mXmlNode = mXmlNode->first_node(nName);
		if (nullptr != mXmlNode)
		{
			nValue->_serialize(this);
		}
		mXmlNode = mXmlNodes.top();
		mXmlNodes.pop();
	}

	template<class __t>
	void XmlReader::_serialize(list<shared_ptr<__t>> nValue, const char * nName)
	{
		xml_node<wchar_t> * xmlNode_ = mXmlNode->first_node(nName);
		if (nullptr == xmlNode_)
		{
			return;
		}
		xmlNode_ = xmlNode_->first_node();
		for ( ; xmlNode_ != NULL; xmlNode_ = xmlNode_->next_sibling() )
		{
			mXmlNode = xmlNode_;
			shared_ptr<__t> __t(new __t());
			t_->_serialize(this);
			nValue.push_back(t_);
		}
	}

}
