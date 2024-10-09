#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.5/lab5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int i = 5;
			int j = 5;
			Assert::AreEqual(binomialCoeff(i,j), 1);
		}
	};
}
