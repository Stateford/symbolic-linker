using System;
using System.IO;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using UI;

namespace UnitTest
{
    [TestClass]
    public class TestUtils
    {
        [TestMethod]
        public void TestVerifyPath()
        {
            var dir = Directory.GetCurrentDirectory();
            Assert.IsTrue(Utils.VerifyPath(dir));
        }
    }
}
