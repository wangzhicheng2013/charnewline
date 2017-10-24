/*************************************************************************
    > File Name: test_unittest.cpp
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sun 08 Oct 2017 07:42:01 PM AWST
 ************************************************************************/

#include "CharLine.h"
#include "gtest/gtest.h"
using namespace char_line;
TEST(CHARLINE, FUNCTION_TEST_OK0)
{
	string str = "Your task is to write a function that takes two arguments";
	CharLine::charline(str, 20);
	cout << str << endl;
	EXPECT_EQ(str, "Your task is to\nwrite a function\nthat takes two\narguments");
}
