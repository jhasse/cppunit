#ifndef HELPERMACROSTEST_H
#define HELPERMACROSTEST_H

#include <cppunit/extensions/HelperMacros.h>


class HelperMacrosTest : public CppUnit::TestCase
{
  CPPUNIT_TEST_SUITE( HelperMacrosTest );
  CPPUNIT_TEST( testNoSubclassing );
  CPPUNIT_TEST( testSubclassing );
  CPPUNIT_TEST( testFail );
  CPPUNIT_TEST( testFailToFail );
  CPPUNIT_TEST( testException );
  CPPUNIT_TEST( testExceptionNotCaught );
  CPPUNIT_TEST_SUITE_END();

public:
  HelperMacrosTest();
  virtual ~HelperMacrosTest();

  virtual void setUp();
  virtual void tearDown();

  void testNoSubclassing();

  void testSubclassing();

  void testFail();
  void testFailToFail();

  void testException();
  void testExceptionNotCaught();

private:
  HelperMacrosTest( const HelperMacrosTest &copy );
  void operator =( const HelperMacrosTest &copy );

  void checkTestResult( int expectedFailures, 
                        int expectedErrors, 
                        int expectedTestsRun );

private:
  CppUnit::TestResult *m_result;
};



#endif  // HELPERMACROSTEST_H
