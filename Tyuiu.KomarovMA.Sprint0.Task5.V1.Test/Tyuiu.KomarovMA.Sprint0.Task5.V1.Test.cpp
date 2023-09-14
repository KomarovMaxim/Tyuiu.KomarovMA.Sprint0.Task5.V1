#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint0.Task5.V1.Lib/Tyuiu.KomarovMA.Sprint0.Task5.V1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task5* date = new Service1();
			float a = 9.0;
			float b = 7.5;
			float c = 5.0;
			double V;

			V = date->Zadacha(a, b, c);
			Assert::AreEqual(337.5, V);

		}
	};
}
