using System;
using System.Xml;
using System.IO;
using System.Collections.Generic;

namespace webstart
{
    public class Serialize
    {
        public void _serialize(ref List<string> nValue, string nName)
        {
            if (null == nValue)
            {
                nValue = new List<string>();
            }
            XmlNode xmlNode_ = mXmlNode.SelectSingleNode(nName);
            if (null == xmlNode_)
            {
                return;
            }
            foreach (XmlNode i in xmlNode_.ChildNodes)
            {
                string text_ = i.InnerText;
                nValue.Add(text_);
            }
        }

        public void _openPath(byte [] nBytes)
        {
            MemoryStream memoryStream = new MemoryStream(nBytes);
            mXmlDocument.Load(memoryStream);
        }

        public void _selectStream(string nStreamName)
        {
            mXmlNode = mXmlDocument.SelectSingleNode(nStreamName);
        }

        public void _runClose()
        {
            mXmlDocument = null;
            mXmlNode = null;
        }

        public Serialize()
        {
            mXmlDocument = new XmlDocument();
            mXmlNode = null;
        }

        XmlDocument mXmlDocument;
        XmlNode mXmlNode;
    }
}
