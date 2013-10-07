using System;
using System.Xml;
using System.Collections.Generic;

namespace package
{
    public class Serialize
    {
        public void _serialize(ref string nValue, string nName, string nOptimal = default(string))
        {
            nValue = nOptimal;
            XmlAttribute xmlAttribute_ = mXmlNode.Attributes[nName];
            if (null != xmlAttribute_)
            {
                nValue = xmlAttribute_.InnerText;
            }
        }

        public void _serialize<__t>(ref __t nValue, string nName, __t nOptimal = default(__t)) where __t : IStream
        {
            mXmlNodes.Push(mXmlNode);
            mXmlNode = mXmlNode.SelectSingleNode(nName);
            if (null == mXmlNode)
            {
                nValue = nOptimal;
            }
            else
            {
                if (object.Equals(nValue, default(__t)))
                {
                    nValue = Activator.CreateInstance<__t>();
                }
                nValue._serialize(this);
            }
            mXmlNode = mXmlNodes.Pop();
        }

        public void _serialize<__t>(ref List<__t> nValue, string nName) where __t : IStream
        {
            if (null == nValue)
            {
                nValue = new List<__t>();
            }
            mXmlNodes.Push(mXmlNode);
            XmlNode xmlNode_ = mXmlNode.SelectSingleNode(nName);
            if (null != xmlNode_)
            {
                foreach (XmlNode i in xmlNode_.ChildNodes)
                {
                    mXmlNode = i;
                    __t t_ = Activator.CreateInstance<__t>();
                    t_._serialize(this);
                    nValue.Add(t_);
                }
            }
            mXmlNode = mXmlNodes.Pop();
        }

        public void _openPath(string nPath)
        {
            mXmlDocument.Load(nPath);
        }

        public void _selectStream(string nStreamName)
        {
            mXmlNode = mXmlDocument.SelectSingleNode(nStreamName);
        }

        public void _runClose()
        {
            mXmlDocument = null;
            mXmlNodes.Clear();
            mXmlNodes = null;
            mXmlNode = null;
        }

        public Serialize()
        {
            mXmlDocument = new XmlDocument();
            mXmlNodes = new Stack<XmlNode>();
            mXmlNode = null;
        }

        XmlDocument mXmlDocument;
        Stack<XmlNode> mXmlNodes;
        XmlNode mXmlNode;
    }
}
