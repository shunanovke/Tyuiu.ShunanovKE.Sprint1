using Microsoft.VisualStudio.TestTools.UnitTesting;
using System;
using Tyuiu.ShunanovKE.Sprint1.Task6.V9.Lib;

namespace Tyuiu.ShunanovKE.Sprint1.Task6.V9.Test
{
    [TestClass]
    public class DataServiceTest
    {
        [TestMethod]
        public void ValidExpression()
        {
            DataService ds = new DataService();
            var x = "всем привет";
            var res = ds.MoveLetterToStart(x);
            var wait = "мвсе тприве";

            Assert.AreEqual(wait, res);
        }
    }
}
