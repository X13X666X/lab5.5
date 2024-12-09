#include "pch.h"
#include "CppUnitTest.h"
#include "..\FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestPositiveExponent)
        {
            Assert::AreEqual(8.0, pow(2.0, 3)); // 2^3 = 8
        }

        TEST_METHOD(TestNegativeExponent)
        {
            Assert::AreEqual(0.25, pow(2.0, -2)); // 2^(-2) = 0.25
        }

        TEST_METHOD(TestZeroExponent)
        {
            Assert::AreEqual(1.0, pow(2.0, 0)); // 2^0 = 1
        }

        TEST_METHOD(TestBaseZero)
        {
            Assert::AreEqual(0.0, pow(0.0, 5)); // 0^5 = 0
        }

        TEST_METHOD(TestNegativeBase)
        {
            Assert::AreEqual(-8.0, pow(-2.0, 3)); // (-2)^3 = -8
        }
    };
}
