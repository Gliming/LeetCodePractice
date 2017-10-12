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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* newList = new ListNode(0);
        ListNode* tail = newList;
        ListNode* tmpNode;
        
        while(l1 && l2){
            if (l1->val < l2->val){
                tmpNode = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                tmpNode = new ListNode(l2->val);
                l2 = l2->next;
            }
            tail->next = tmpNode;
            tail = tmpNode;
        }
        if (l1){
            tail->next = l1;
            //while(l1){
            //    tmpNode = new ListNode(l1->val);
            //    l1 = l1->next;
            //    tail->next = tmpNode;
            //    tail = tmpNode;
            //}
        }
        if (l2){
            tail->next = l2;
            //while(l2){
            //    tmpNode = new ListNode(l2->val);
            //    l2 = l2->next;
            //    tail->next = tmpNode;
            //    tail = tmpNode;
            //}
        }
        return newList->next;
    }
};