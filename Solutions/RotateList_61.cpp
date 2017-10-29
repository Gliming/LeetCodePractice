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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL) return NULL;
        
        ListNode* node = head;
        int count = 1;
        while(node->next != NULL){
            count++;
            node = node->next;
        }
        
        int leftNum = count - (k % count);
        if (leftNum <= 0){
            return head;
        }
        node->next = head;
        ListNode* tmpNode = head;
        for (int i =0; i < leftNum - 1; i++){
            tmpNode = tmpNode->next;
        }
        ListNode* newHead = tmpNode->next;
        tmpNode->next = NULL;
        return newHead;
    }
};