using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace UI
{
    public class Utils
    {
        public static bool VerifyPath(string path)
        {
            try
            {
                Path.GetFullPath(path);
            }
            catch
            {
                return false;
            }

            return Path.IsPathRooted(path);
        }
    }
}
