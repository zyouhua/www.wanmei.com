namespace package
{
    public class Package : IStream
    {
        public void _serialize(Serialize nSerialize)
        {
            nSerialize._serialize(ref mName, @"name");
            nSerialize._serialize(ref mValue, @"value");
        }

        public string _getName()
        {
            return mName;
        }

        public string _getValue()
        {
            return mValue;
        }

        public Package()
        {
            mName = "";
            mValue = "";
        }

        string mName;
        string mValue;
    }
}
