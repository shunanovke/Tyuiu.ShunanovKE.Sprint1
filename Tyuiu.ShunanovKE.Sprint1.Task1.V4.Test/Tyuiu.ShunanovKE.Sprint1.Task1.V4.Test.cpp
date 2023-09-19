#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ShunanovKE.Sprint1.Task1.V4.Lib/Tyuiu.ShunanovKE.Sprint1.Task1.V4.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuShunanovKESprint1Task1V4Test
{
	TEST_CLASS(TyuiuShunanovKESprint1Task1V4Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint1Task1* d = new Service();
			int a = 137;
			bool ans;

			ans = d->Logic(a);

			Assert::AreEqual(ans, true);
		}
	};
}
