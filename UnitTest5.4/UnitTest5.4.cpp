#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double s = (1.0 / 1) + sqrt(1 + pow(sin(1), 2));
			Assert::AreEqual(s, 2.30, 0.01);
		}
	};
}
