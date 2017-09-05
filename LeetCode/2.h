#pragma once
#include "header.h"
/*
*Your runtime beats 11.08 % of cpp submissions.
*/

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		ListNode* start = new ListNode(-1);
		ListNode* result = start;
		ListNode* n1 = l1;
		ListNode* n2 = l2;
		int CF = 0;
		while (CF == 1 || n1 != NULL || n2 != NULL)
		{
			int x=0, y=0;
			if(n1!=NULL)
			{
				x = n1->val;
				n1 = n1->next;
			}
			if (n2 != NULL)
			{
				y = n2->val;
				n2 = n2->next;
			}
			int re = x + y + CF;
			CF = re / 10;
			ListNode* s = new ListNode(re % 10);
			result->next = s;
			result = result->next;
		}
		return start->next;
	}
};