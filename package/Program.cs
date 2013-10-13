using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using System.Runtime.InteropServices;

namespace package
{
    class Program
    {
        [DllImport(@"20140101.dll")]
        static extern void m10000001(string n1, uint n2);

        [DllImport(@"20140101.dll")]
        static extern void m10000002(string n1, string n2);

        [DllImport(@"20140101.dll")]
        static extern void m10000003();

        static void Main(string[] args)
        {
            uint count = _countDirectory(args[1]);
            m10000001(args[0], count);
            _runDirectory(args[1]);
            m10000003();
        }

        static void _runDirectory(string nName)
        {
            string packages_ = Path.Combine(nName, @"packages.xml");
            if (File.Exists(packages_))
            {
                _loadPackages(nName, packages_);
            }
            string[] directorys_ = Directory.GetDirectories(nName);
            foreach (string i in directorys_)
            {
                _runDirectory(i);
            }
        }

        static void _loadPackages(string nPath, string nName)
        {
            Serialize serialize_ = new Serialize();
            serialize_._openPath(nName);
            Packages packages_ = new Packages();
            serialize_._selectStream(packages_._streamName());
            packages_._serialize(serialize_);
            serialize_._runClose();
            IList<Package> packageL_ = packages_._getPackages();
            foreach (Package i in packageL_)
            {
                _loadPackage(nPath, i);
            }
        }

        static void _loadPackage(string nPath, Package nPackage)
        {
            string name_ = nPackage._getName();
            string value_ = nPackage._getValue();
            string path_ = Path.Combine(nPath, value_);
            Console.WriteLine(name_);
            Console.WriteLine(value_);
            m10000002(path_, name_);
        }

        static uint _countDirectory(string nName)
        {
            uint result_ = 0;
            string packages_ = Path.Combine(nName, @"packages.xml");
            if (File.Exists(packages_))
            {
                result_ = _countPackages(nName, packages_);
            }
            string[] directorys_ = Directory.GetDirectories(nName);
            foreach (string i in directorys_)
            {
                result_ += _countDirectory(i);
            }
            return result_;
        }

        static uint _countPackages(string nPath, string nName)
        {
            Serialize serialize_ = new Serialize();
            serialize_._openPath(nName);
            Packages packages_ = new Packages();
            serialize_._selectStream(packages_._streamName());
            packages_._serialize(serialize_);
            serialize_._runClose();
            IList<Package> packageL_ = packages_._getPackages();
            uint result_ = (uint)packageL_.Count;
            return result_;
        }
    }
}
