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
    // ListNode* middleNode(ListNode* head) {
    //     ListNode* node = head;
    //     int len = 0;
    //     while(node != nullptr){
    //         node = node->next;
    //         len++;
    //     }
    //     int tar = ceil(len/2);

    //     node = head;
    //     len = 0;
    //     while(len < tar){
    //         node = node->next;
    //         len++;
    //     }
    //     return node;
    // }

    // can be done using slow fast (toroise hare approach)
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        return fast->next ? slow->next : slow;
    }
};