/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 *
 * struct ListNode
 * {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *_addTwoNumbers(struct ListNode *l1, struct ListNode *l2, int carry)
{

    struct ListNode *result = (struct ListNode *)malloc(sizeof(struct ListNode));

    int v1 = (l1 == NULL) ? 0 : l1->val;
    int v2 = (l2 == NULL) ? 0 : l2->val;

    if (l1 == NULL && l2 == NULL && !carry)
        return NULL;

    int out = v1 + v2 + carry;

    carry = out / 10;
    out %= 10;

    result->val = out;
    result->next = _addTwoNumbers((l1 == NULL) ? NULL : l1->next, (l2 == NULL) ? NULL : l2->next, carry);

    return result;
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2)
{
    return _addTwoNumbers(l1, l2, 0);
}
// @lc code=end
