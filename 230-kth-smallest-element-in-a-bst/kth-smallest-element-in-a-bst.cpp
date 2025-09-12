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
    int ans = -1, count = 0;
public:
    // Naive Approach
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