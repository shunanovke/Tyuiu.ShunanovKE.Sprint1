#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ShunanovKE.Sprint1.Task3.V0.Lib/Tyuiu.ShunanovKE.Sprint1.Task3.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//init
			ISprint1Task2* d = new Service();
			int a = 2048;
			bool ans;

			//run
			ans = d->LogicLong(a);

			Assert::AreEqual(ans, true);
		}
	};
}
