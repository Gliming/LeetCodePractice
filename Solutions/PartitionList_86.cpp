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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL) return head;
        ListNode* head2 = NULL;
        ListNode* node2 = NULL;
        ListNode* node = head;
        ListNode* preNode = NULL;
        while(node != NULL){
            if (node->val >= x){
                if (preNode == NULL){
                    head = head->next;
                }
                else{
                    preNode->next = node->next;    
                }
                
                if (head2 == NULL){
                    head2 = node;
                    node2 = node;
                }
                else{
                    node2->next = node;
                    node2 = node2->next;
                }
            }
            else{
                preNode = node;
            }
            node = node->next;
        }
        
        if (preNode){
            preNode->next = head2;
        }
        else{
            return head2;
        }
        
        if (node2){
            node2->next = NULL;
        }
        return head;
    }
};