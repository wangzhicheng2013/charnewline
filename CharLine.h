/*************************************************************************
    > File Name: CharLine.h
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 21 Oct 2017 01:56:49 PM AWST
 ************************************************************************/

#ifndef CHAR_LINE_H
#define CHAR_LINE_H
#include <string.h>
#include <iostream>
#include <string>
namespace char_line {
using namespace std;
static const int MAX = 100;
class CharLine
{
public:
	/*
	 * @purpose:seperate a line string
	 * */
	static void charline(string &str, int limit);
};
}
#endif
