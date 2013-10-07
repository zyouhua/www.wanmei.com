using System.Collections.Generic;

namespace package
{
    public class Packages : IStream
    {
        public void _serialize(Serialize nSerialize)
        {
            nSerialize._serialize(ref mPackages, @"package");
        }

        public string _streamName()
        {
            return "packages";
        }

        public IList<Package> _getPackages()
        {
            return mPackages;
        }

        public Packages()
        {
            mPackages = new List<Package>();
        }

        List<Package> mPackages;
    }
}
