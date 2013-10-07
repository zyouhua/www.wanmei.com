using System.Collections.Generic;

namespace webstart
{
    public class PluginUrls : IStream
    {
        public void _serialize(Serialize nSerialize)
        {
            nSerialize._serialize(ref mPlugins, @"plugins");
        }

        public string _streamName()
        {
            return @"pluginUrls";
        }

        public IList<string> _getPlugins()
        {
            return mPlugins;
        }

        public PluginUrls()
        {
            mPlugins = new List<string>();
        }

        List<string> mPlugins;
    }
}