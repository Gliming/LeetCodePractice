/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return;
        
        ListNode* p1 = head;
        ListNode* p2 = head->next;
        while(p2 && p2->next){
            p1 = p1->next;
            p2 = p2->next->next;
        }
        
        ListNode* mid = p1->next;
        p1->next = NULL;
        p2 = mid->next;
        mid->next = NULL;
        
        while(p2){
            p1 = p2->next;
            p2->next = mid;
            mid = p2;
            p2 = p1;
        }
        
        p1 = head;
        p2 = mid;
        ListNode* t;
        while(p2){
            t = p1->next;
            p1->next = p2;
            p1 = p2;
            p2 = t;
        }
    }
};