using System;
using System.IO;
using System.Web;
using System.Text;
using System.Reflection;
using System.Web.Hosting;
using System.Web.Compilation;
using System.Collections.Generic;
using System.Runtime.InteropServices;

[assembly: PreApplicationStartMethod(typeof(webstart.Startup), "_runLoad")]
namespace webstart
{
    public static class Startup
    {
        static bool mInited = true;
        public static void _runLoad()
        {
            if (mInited)
            {
                _runInit();
                _startPlugins();
                mInited = false;
            }
        }

        static void _runInit()
        {
            Assembly assembly = Assembly.GetAssembly(typeof(MvcApplication));
            BuildManager.AddReferencedAssembly(assembly);
        }

        [DllImport(@"20140101.dll")]
        static extern void m00000001(string n1);

        [DllImport(@"20140101.dll")]
        static extern void m00000002(string n1);

        [DllImport(@"20140101.dll")]
        static extern void m00000003(string n1, ref IntPtr n2, ref uint n3);

        [DllImport(@"20140101.dll")]
        static extern void m00000004(IntPtr n1, uint n2);

        static void _startPlugins()
        {
#if DEBUG
            string systemPath_ = HostingEnvironment.MapPath(@"~");
            systemPath_ = Path.Combine(systemPath_, @"..\..\bin\package\20140101.dat");
#else
            string systemPath_ = HostingEnvironment.MapPath(@"~");
            systemPath_ = Path.Combine(systemPath_, @"bin\20140101.dat");
#endif
            m00000001(systemPath_);
            _pluginList();
        }

        static void _pluginList()
        {
            uint n3 = default(uint);
            IntPtr n2 = default(IntPtr);
            m00000003("20140101", ref n2, ref n3);
            byte[] bytes = new byte[n3];
            Marshal.Copy(n2, bytes, 0, (int)n3);
            Serialize serialize_ = new Serialize();
            serialize_._openPath(bytes);
            PluginUrls pluginUrls_ = new PluginUrls();
            serialize_._selectStream(pluginUrls_._streamName());
            pluginUrls_._serialize(serialize_);
            serialize_._runClose();
            IList<string> plugins_ = pluginUrls_._getPlugins();
            foreach (string i in plugins_)
            {
                _runPlugin(i);
            }
        }

        static void _runPlugin(string nUrl)
        {
            uint n3 = default(uint);
            IntPtr n2 = default(IntPtr);
            m00000003(nUrl, ref n2, ref n3);
            byte[] bytes = new byte[n3];
            Marshal.Copy(n2, bytes, 0, (int)n3);
            Assembly assembly_ = Assembly.Load(bytes);
            BuildManager.AddReferencedAssembly(assembly_);
        }
    }
}
