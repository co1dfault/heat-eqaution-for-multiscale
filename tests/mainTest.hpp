class mainTest : public CxxTest::TestSuite
{
public:
	void testMethod( void )
	{
		TS_ASSERT( 1 + 1 > 1 );
		TS_ASSERT_EQUALS( 1 + 1, 2 );
	}
};
