using System;
using System.IO;
using Microsoft.VisualStudio.TestTools.UnitTesting;
using UI;

namespace UnitTest
{
    [TestClass]
    public class TestUtilsVerifyPath
    {
        [TestMethod]
        public void TestValidDirectory()
        {
            var dir = Directory.GetCurrentDirectory();
            Assert.IsTrue(Utils.VerifyPath(dir));
        }

        [TestMethod]
        public void TestInvalidDirectory()
        {
            Assert.IsFalse(Utils.VerifyPath("/foo"));
        }
    }
}
