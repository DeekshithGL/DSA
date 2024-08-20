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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head -> next)
            return head;

        int n = 1;
        ListNode *temp = head;
        while(temp -> next)
        {
            temp = temp -> next;
            n++;
        }
        temp -> next = head;

        k = k % n;
        if(k == 0)
        {
            temp -> next = nullptr;
            return head;
        }

        temp = head;
        for(int i = 0; i < n - k - 1; i++)
            temp = temp -> next;
        
        head = temp -> next;
        temp -> next = nullptr;

        return head;
    }
};