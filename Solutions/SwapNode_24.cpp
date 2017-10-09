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
    ListNode* swapPairs(ListNode* head) {
        ListNode* tmpNode = head;
        ListNode* nnNode;
        ListNode* lastNode = NULL;
        if (head == NULL || head->next == NULL){
            return head;
        }
        
        head = NULL;
        
        while (tmpNode != NULL){
            if (tmpNode->next == NULL)
                break;
            
            nnNode = tmpNode->next->next;
            if (lastNode != NULL){
                lastNode->next = tmpNode->next;
            }
            
            if (head == NULL){
                head = tmpNode->next;
            }
            
            tmpNode->next->next = tmpNode;
            tmpNode->next = nnNode;
            
            lastNode = tmpNode;
            tmpNode = nnNode;
        }
        return head;
    }
};