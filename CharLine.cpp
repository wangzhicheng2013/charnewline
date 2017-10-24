/*************************************************************************
    > File Name: CharLine.cpp
    > Author: wangzhicheng
    > Mail: 2363702560@qq.com 
    > Created Time: Sat 21 Oct 2017 01:56:49 PM AWST
 ************************************************************************/

#include "CharLine.h"
namespace char_line {
/*
 * @purpose:seperate a line string
 * */
void CharLine::charline(string &str, int limit)
{
	if(limit <= 0) return;
	if(limit > MAX) limit = MAX;
	int i = 0;
	int width = 0;
	while(str[i])
	{
		if(width < limit)
		{
			++i;
			++width;
		}
		else	// draw back
		{
			width = 0;
			while(32 != str[i] && str[i] && i >= 0)
			{
				i--;
			}
			if(32 == str[i]) 
			{
				str[i++] = '\n';
			}
			else break;
		}
	}
}
}
