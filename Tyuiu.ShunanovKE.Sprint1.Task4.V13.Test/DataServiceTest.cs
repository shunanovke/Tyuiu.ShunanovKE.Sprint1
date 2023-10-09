using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task4.V13.Lib;

namespace Tyuiu.ShunanovKE.Sprint1.Task4.V13.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void ValidExpression()
        {
            DataService ds = new DataService();
            double x = 0.5, y = -0.5;
            var wait = 0.3333333333333333;
            var res = ds.Calculate(x, y);

            Assert.AreEqual(wait, res);
        }
    }
}
