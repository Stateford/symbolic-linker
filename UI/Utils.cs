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
        /// <summary>
        /// Check that path exists
        /// </summary>
        /// <param name="path"></param>
        /// <returns></returns>
        public static bool VerifyPath(string path)
        {
            var fullPath = Path.GetFullPath(path);
            return Directory.Exists(fullPath);
        }
    }
}
