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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(0);
        ListNode* last = head;
        int tmpVal;
        int digit = 0;
        
        ListNode* tmpL1 = l1;
        ListNode* tmpL2 = l2;
        while(tmpL1->next || tmpL2->next){
            if (tmpL1->next == NULL){
                ListNode* tmpNode = new ListNode(0);
                tmpL1->next = tmpNode;
            }
            if (tmpL2->next == NULL){
                ListNode* tmpNode = new ListNode(0);
                tmpL2->next = tmpNode;
            }
            tmpL1 = tmpL1->next;
            tmpL2 = tmpL2->next;
        }
        
        while(l1 && l2){
            if (l1->val + l2->val + digit >= 10){
                tmpVal = (l1->val + l2->val + digit) % 10;
                digit = 1;
            }
            else{
                tmpVal = (l1->val + l2->val + digit);
                digit = 0;
            }
            ListNode* sum = new ListNode(tmpVal);
            last->next=sum;
            last=sum;
            l1=l1->next;
            l2=l2->next;
        }
        if (digit == 1){
            ListNode* sum = new ListNode(1);
            last->next = sum;
        }
        
        return head->next;
    }
};