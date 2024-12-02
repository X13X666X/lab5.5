#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestPowerPositive)
        {
            recursionDepth = 0;
            maxRecursionDepth = 0;

            Assert::AreEqual(8.0, power(2, 3), 0.001);
            Assert::AreEqual(4, getMaxRecursionDepth());
        }

        TEST_METHOD(TestPowerNegative)
        {
            recursionDepth = 0;
            maxRecursionDepth = 0;

            Assert::AreEqual(0.125, power(2, -3), 0.001);
            Assert::AreEqual(4, getMaxRecursionDepth()); 
        }

        TEST_METHOD(TestPowerZeroExponent)
        {
            recursionDepth = 0;
            maxRecursionDepth = 0;

            Assert::AreEqual(1.0, power(5, 0), 0.001);
            Assert::AreEqual(1, getMaxRecursionDepth());
        }

        TEST_METHOD(TestPowerZeroBase)
        {
            recursionDepth = 0;
            maxRecursionDepth = 0;

            Assert::AreEqual(0.0, power(0, 5), 0.001);
            Assert::AreEqual(6, getMaxRecursionDepth());
        }
    };
}
