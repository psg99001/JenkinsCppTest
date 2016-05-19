#include <stdio.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <fstream>

int main(int argc, char* argv[])
{
    CPPUNIT_NS::TestResult controller;

    CPPUNIT_NS::TestResultCollector result;
    controller.addListener(&result);

    CPPUNIT_NS::BriefTestProgressListener progress;
    controller.addListener(&progress);

    CPPUNIT_NS::TestRunner runner;
    runner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    runner.run (controller);

    CPPUNIT_NS::CompilerOutputter outputter (&result, CPPUNIT_NS::stdCOut());
    outputter.write();

    std::ofstream xmlFileOut("TestMain.xml");
    CPPUNIT_NS::XmlOutputter xmlOut(&result, xmlFileOut);

    xmlOut.write();

    return result.wasSuccessful() ? 0 : 1;

}
