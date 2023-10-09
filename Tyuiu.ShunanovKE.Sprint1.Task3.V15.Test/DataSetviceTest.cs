using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task3.V15.Lib;

namespace Tyuiu.ShunanovKE.Sprint1.Task3.V15.Test
{
    [TestClass]
    public class DataSetviceTest
    {
        [TestMethod]
        public void ValidExpression()
        {
            DataService ds = new DataService();
            double v1 = 1, v2 = 3, S = 15, T = 5;
            var res = ds.DistanceOverTime(v1, v2, S, T);
            var wait = 35;
            Assert.AreEqual(wait, res);
        }
    }
}
