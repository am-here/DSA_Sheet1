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
    ListNode* middleNode(ListNode* head) {
        int k = 0;
        ListNode* dup = head;
        while(dup!=NULL)
        {
            k++;
            dup=dup->next;
        }
        k/=2;
        while(k!=0)
        {
            head=head->next;
            k--;
        }
        return head;
    }
};