#ifndef CALCULATORTESTS_H
#define CALCULATORTESTS_H

#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>
#include <Calculator.h>


class CalculatorTests : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(CalculatorTests);
    CPPUNIT_TEST(addTwoNumbersTest);
    CPPUNIT_TEST(addTwoNumbersThisShouldFailTest);

    CPPUNIT_TEST_SUITE_END();

protected:
    void addTwoNumbersTest(void);
    void addTwoNumbersThisShouldFailTest(void);


private:

    Calculator *calc;
};

#endif
