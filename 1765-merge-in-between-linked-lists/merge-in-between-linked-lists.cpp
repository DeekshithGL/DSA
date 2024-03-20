/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int i = 1;
        ListNode *temp1 = list1;
        while(i < a)
        {
            temp1 = temp1 -> next;
            i++;
        }

        ListNode *temp2 = temp1;
        while(i <= b)
        {
            temp2 = temp2 -> next;
            i++;
        }
        temp1 -> next = list2;

        while(temp1 -> next)
            temp1 = temp1 -> next;
        
        temp1 -> next = temp2 -> next;

        return list1;
    }
};