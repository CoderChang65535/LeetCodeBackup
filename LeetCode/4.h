#pragma once
#include "header.h"
/*
 *
 */
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int l1 = nums1.size();
		int l2 = nums2.size();
		int s1 = 0;
		int s2 = 0;
		int mid = (l1 + l2) / 2;
		vector<double> result(2560, -1.0);
		int len = 0;
		if(l1==0)
		{
			if((l1 + l2) % 2 == 0)
			{
				return 1.0*(nums2[l2 / 2 - 1] + nums2[l2 / 2]) / 2;
			}
			else
			{
				return 1.0*nums2[l2 / 2];
			}
		}
		if (l2 == 0)
		{
			if ((l1 + l2) % 2 == 0)
			{
				return 1.0*(nums1[l1 / 2 - 1] + nums1[l1 / 2]) / 2;
			}
			else
			{
				return 1.0*nums1[l1 / 2];
			}
		}
		while (len <= mid)
		{
			if (nums1[s1] < nums2[s2])
			{
				result[len] = nums1[s1];
				s1++;
				len++;
			}
			else
			{
				result[len] = nums2[s2];
				s2++;
				len++;
			}
		}
		if ((l1 + l2) % 2 == 0)
		{
			return 1.0*(result[len - 1] + result[len - 2]) / 2;
		}
		else
		{
			return 1.0*result[len - 1];
		}
	}
};