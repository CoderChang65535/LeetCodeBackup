#pragma once
#pragma once
#include "header.h"
/*
* 
*/
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		vector<int> record(256, -1);
		int length = s.length();
		int maxlen = 0;
		int start = -1;
		for(int i=0;i<length;i++)
		{
			int j = s[i];
		}
	}
	int lengthOfLongestSubstring2(string s) {
		vector<int> dict(256, -1);
		int maxLen = 0, start = -1;
		for (int i = 0; i != s.length(); i++) {
			if (dict[s[i]] > start)
				start = dict[s[i]];
			dict[s[i]] = i;
			maxLen = max(maxLen, i - start);
		}
		return maxLen;
	}
};