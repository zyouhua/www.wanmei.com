#pragma once

namespace std {

	class XmlReader
	{
	public:
		void _serialize(bool& nValue, const wchar_t * nName, bool nOptimal = false);
		void _serialize(__i8& nValue, const wchar_t * nName, __i8 nOptimal = 0);
		void _serialize(list<__i8>& nValue, const wchar_t * nName);
		void _serialize(__u8& nValue, const wchar_t * nName, __u8 nOptimal = 0);
		void _serialize(list<__u8>& nValue, const wchar_t * nName);
		void _serialize(__i16& nValue, const wchar_t * nName, __i16 nOptimal = 0);
		void _serialize(list<__i16>& nValue, const wchar_t * nName);
		void _serialize(__u16& nValue, const wchar_t * nName, __u16 nOptimal = 0);
		void _serialize(list<__u16>& nValue, const wchar_t * nName);
		void _serialize(__i32& nValue, const wchar_t * nName, __i32 nOptimal = 0);
		void _serialize(list<__i32>& nValue, const wchar_t * nName);
		void _serialize(__u32& nValue, const wchar_t * nName, __u32 nOptimal = 0);
		void _serialize(list<__u32>& nValue, const wchar_t * nName);
		void _serialize(__i64& nValue, const wchar_t * nName, __i64 nOptimal = 0);
		void _serialize(list<__i64>& nValue, const wchar_t * nName);
		void _serialize(__u64& nValue, const wchar_t * nName, __u64 nOptimal = 0);
		void _serialize(list<__u64>& nValue, const wchar_t * nName);
		void _serialize(wstring& nValue, const wchar_t * nName, const wchar_t * nOptimal = L"");
		void _serialize(list<wstring>& nValue, const wchar_t * nName);
		void _serialize(string& nValue, const wchar_t * nName, const char * nOptimal = "");
		void _serialize(list<string>& nValue, const wchar_t * nName);
		void _serialize(float& nValue, const wchar_t * nName, float nOptimal = 0.f);
		void _serialize(list<float>& nValue, const wchar_t * nName);
		void _serialize(double& nValue, const wchar_t * nName, double nOptimal = 0.);
		void _serialize(list<double>& nValue, const wchar_t * nName);
		template<class __t>
		void _serialize(__t * nValue, const wchar_t * nName);
		template<class __t>
		void _serialize(__t& nValue, const wchar_t * nName);
		template<class __t>
		void _serialize(list<__t *> nValue, const wchar_t * nName);
		template<class __t>
		void _serialize(shared_ptr<__t> nValue, const wchar_t * nName);
		template<class __t>
		void _serialize(list<shared_ptr<__t>> nValue, const wchar_t * nName);
		void _openUrl(const wstring& nUrl);
		__i32 _pushStream(const wchar_t * nName);
		void _popStream();
		void _runClose();
	public:
		XmlReader();
		~XmlReader();
	private:
		xml_document<wchar_t> mXmlDocument;
		xml_node<wchar_t> * mXmlNode;
		stack<xml_node<wchar_t> *> mXmlNodes;
	};
	template<class __t>
	void XmlReader::_serialize(__t * nValue, const wchar_t * nName)
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
	void XmlReader::_serialize(__t& nValue, const wchar_t * nName)
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
	void XmlReader::_serialize(list<__t *> nValue, const wchar_t * nName)
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
	void XmlReader::_serialize(shared_ptr<__t> nValue, const wchar_t * nName)
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
	void XmlReader::_serialize(list<shared_ptr<__t>> nValue, const wchar_t * nName)
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
