using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Interop;

namespace symbolic_linker
{
    class Program
    {
        static void Main(string[] args)
        {
            var x = new SymLinker();
            Console.WriteLine(x.foo());

            x.bar();
            x.foobar("string from c#");
            string another = "Another string!!!";
            x.foobar(another);
        }
    }
}
