using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task7.V24.Lib;

namespace Tyuiu.ShunanovKE.Sprint1.Task7.V24.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void TestMethod1()
        {
            DataService ds = new DataService();
            double x = 2, y = 1;
            double res = ds.Calculate(x, y);
            double wait = -0.839;

            Assert.AreEqual(res, wait);
        }
    }
}
