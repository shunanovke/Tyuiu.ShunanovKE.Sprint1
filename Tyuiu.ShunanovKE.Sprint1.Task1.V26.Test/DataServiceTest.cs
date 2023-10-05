using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task1.V26.Lib;

namespace Tyuiu.ShunanovKE.Sprint1.Task1.V26.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void ValidExpression()
        {
            DataService ds = new DataService();
            var x = 2.0;
            var y = 3.0;
            var res = ds.Calculate(x,y);
            Assert.AreEqual(2, res);
        }
    }
}
