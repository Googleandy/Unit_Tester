#include "gtest/gtest.h"
#include "MyClass.h"

class MyClassTest: public ::testing::Test
{
protected:
	MyClass m;
};

TEST_F(MyClassTest, failingTest){
	ASSERT_TRUE(true);
}

TEST_F(MyClassTest, MyClassReturnsZero){
	ASSERT_EQ(0,m.getZero());
}

