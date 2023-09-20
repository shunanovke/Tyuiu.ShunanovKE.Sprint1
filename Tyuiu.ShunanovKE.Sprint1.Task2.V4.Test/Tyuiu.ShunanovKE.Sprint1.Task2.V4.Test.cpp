#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ShunanovKE.Sprint1.Task2.V4.Lib/Tyuiu.ShunanovKE.Sprint1.Task2.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* d = new Service();
			int a = 459;
			bool c;

			c = d->LogicLong(a);

			Assert::AreEqual(c, true);
		}
	};
}
