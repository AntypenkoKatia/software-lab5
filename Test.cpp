#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Dell\OneDrive\Документи\ХПИ\лаба
3\UnitTest1\ConsoleApplication1\ConsoleApplication1.cpp"
#include <expected>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{
	TEST_CLASS(CalculateTest)
	{
	public:
		TEST_METHOD(Calculate_get4and1and1and1_2returned)
		{
			int n = 5;
			int x = 4;
			int b = 5;
			int h = 4;
			int actual = calculate(n, x);
			int expected = 8;
			Assert::AreEqual(expected, actual);
		}
	public:
		TEST_METHOD(Calculate_get8and6and6and1_47returned)
		{
			int n = 8;
			int x = 6;
			int b = 6;
			int h = 1;
			int actual = calculate(n, x);
			int expected = 14;
			Assert::AreEqual(expected, actual);
		}
	};
	TEST_CLASS(checkValidParamsTests)
	{
	public:
		TEST_METHOD(checkValidParams_get8_exceptionNotTrown)
		{
			int n = 8;
			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}
	public:
		TEST_METHOD(checkValidParams_get0_exceptionNotTrown)
		{
			int n = 0;
			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
	};
}
