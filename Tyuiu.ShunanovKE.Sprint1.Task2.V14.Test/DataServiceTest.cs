using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task2.V14.Lib;
namespace Tyuiu.ShunanovKE.Sprint1.Task2.V14.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void ValidExpression()
        {
            DataService ds = new DataService();
            var x = 274;
            var res = ds.ConvertKelvinToCelsius(x);
            Assert.AreEqual(res, 1);
        }
    }
}
