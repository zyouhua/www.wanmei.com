using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.Http;
using System.Web.Mvc;
using System.Web.Routing;
using System.Runtime.InteropServices;

namespace webstart
{
    // 注意: 有关启用 IIS6 或 IIS7 经典模式的说明，
    // 请访问 http://go.microsoft.com/?LinkId=9394801
    public class MvcApplication : System.Web.HttpApplication
    {
        [DllImport(@"20140101.dll")]
        static extern void mn00000002();
        protected void Application_Start()
        {
            AreaRegistration.RegisterAllAreas();

            WebApiConfig.Register(GlobalConfiguration.Configuration);
            FilterConfig.RegisterGlobalFilters(GlobalFilters.Filters);
            RouteConfig.RegisterRoutes(RouteTable.Routes);
            mn00000002();
        }

        [DllImport(@"20140101.dll")]
        static extern void mn00000003();

        [DllImport(@"20140101.dll")]
        static extern void mn00000004();

        [DllImport(@"20140101.dll")]
        static extern void m00000005();
        protected void Application_End()
        {
            m00000005();
            mn00000003();
            mn00000004();
        }
    }
}
