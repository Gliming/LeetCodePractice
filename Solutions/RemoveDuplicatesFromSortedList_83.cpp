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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        int val = head->val;
        ListNode* node = head->next;
        ListNode* preNode = head;
        while(node != NULL){
            if (node->val != val){
                val = node->val;
                preNode->next = node;
                preNode = preNode->next;
            }
            node = node->next;
        }
        preNode->next = NULL;
        return head;
    }
};