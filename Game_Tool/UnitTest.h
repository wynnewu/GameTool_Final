#ifndef UnitTest_h
#define UnitTest_h
#include <cppunit/extensions/HelperMacros.h>

class UnitTest : public CPPUNIT_NS::TestFixture
{
	CPPUNIT_TEST_SUITE(UnitTest);
	CPPUNIT_TEST(testMinDis);
	CPPUNIT_TEST(testLine1);
	CPPUNIT_TEST(testLine2);

	CPPUNIT_TEST_SUITE_END();
public:
	UnitTest();
	~UnitTest();

	void setUp();
	void tearDown();

	void testMinDis();
	void testLine1();
	void testLine2();
};
#endif
