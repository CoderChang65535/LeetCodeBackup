#pragma once
#include "header.h"
/*
 * Your runtime beats 82.02 % of cpp submissions.
 */
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		map<int, int> _map;
		int n = nums.size();
		_map.insert(make_pair(nums[0], 0));
		for (int i = 1; i < n; i++) {
			int value = target - nums[i];
			if (_map.find(value) != _map.end())
			{
				vector<int> result;
				result.push_back(_map[value]);
				result.push_back(i);
				return result;
			}
			_map.insert(make_pair(nums[i], i));
		}
	}
};