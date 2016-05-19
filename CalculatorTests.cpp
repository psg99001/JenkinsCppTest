#include <CalculatorTests.h>
#include <cppunit/TestAssert.h>

CPPUNIT_TEST_SUITE_REGISTRATION(CalculatorTests);

void CalculatorTests::addTwoNumbersTest()
{
    calc = new Calculator();
   CPPUNIT_ASSERT(calc->addTwoNumbers(4,2) == 6 );
}

void CalculatorTests::addTwoNumbersThisShouldFailTest()
{
    //calc->addTwoNumbers(4,2);
   CPPUNIT_ASSERT(calc->addTwoNumbers(4,3) == 6 );
}


