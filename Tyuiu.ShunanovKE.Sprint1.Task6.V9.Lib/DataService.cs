using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using tyuiu.cources.programming.interfaces.Sprint1;

namespace Tyuiu.ShunanovKE.Sprint1.Task6.V9.Lib
{
    public class DataService : ISprint1Task6V9
    {
        public string MoveLetterToStart(string value)
        {
            string[] a = value.Split(' ');
            string ans = "";
            for (int i = 0; i < a.Length; i++)
            {
                ans += a[i].Last() + a[i].Substring(0, a[i].Length - 1);
                if (i + 1 < a.Length)
                {
                    ans += ' ';
                }
            }
            return ans;
        }
    }
}
