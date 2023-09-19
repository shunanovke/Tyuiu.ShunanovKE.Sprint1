#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ShunanovKE.Sprint1.Task0.V4.Lib/Tyuiu.ShunanovKE.Sprint1.Task0.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest0
{
	TEST_CLASS(UnitTest0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint1Task0V00* c = new Service();
			int a = 6;
			int b = 4;
			int ans;

			//Run
			ans = c->Calculate(a, b);

			Assert::AreEqual(ans, 24);

		}
	};
}
