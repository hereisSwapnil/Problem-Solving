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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode *s = head;

        while(s){
            arr.push_back(s->val);
            s = s->next;
        }

        sort(arr.begin(), arr.end());

        s = head;
        int i = 0;
        while(s){
            s->val = arr[i];
            s = s->next;
            i++;
        }
        return head;
    }
};