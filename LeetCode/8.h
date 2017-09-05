#pragma once
#include "header.h"
/*
 *
 */
class Solution {
public:
	int myAtoi(string str) {
		int flag = 1;
		int start = 0;
		int len = str.length();
		long long result = 0;
		bool s = true;
		while(start<len)
		{
			if(str[start]<'0'||str[start]>'9')
			{
				if(!s)
				{
					break;
				}
				if(str[start]==' ')
				{
					start++;
					continue;
				}
				if (str[start] == '-')
				{
					flag = -1;
					start++;
					s = false;
					continue;
				}
				else if (str[start] == '+') {
					start++;
					s = false;
					continue;
				}
				break;
			}
			s = false;
			result *= 10;
			result += str[start] - '0';
			start++;
		}
		return result*flag;
	}
};