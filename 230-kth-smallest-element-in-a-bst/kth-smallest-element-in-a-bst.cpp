/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // Naive Approach
    // vector<int> inorderArr(TreeNode* root, vector<int> &arr){
    //     if(!root) return arr;
    //     inorderArr(root->left, arr);
    //     arr.push_back(root->val);
    //     inorderArr(root->right, arr);
    //     return arr;
    // }
    // int kthSmallest(TreeNode* root, int k) {
    //     vector<int> arr;
    //     arr = inorderArr(root, arr);
    //     sort(arr.begin(), arr.end());
    //     return arr[k-1];
    // }

    // Optimised Approach
    int ans = -1, count = 0;
    void inorderArr(TreeNode* root, int k){
        if(!root) return;
        inorderArr(root->left, k);
        count++;
        if(count == k){
            ans = root->val;
            return;
        }
        inorderArr(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        inorderArr(root, k);
        return ans;
    }
};