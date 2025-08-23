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
    int res = 0;
    int findDia(TreeNode* root){
        if(!root) return 0;

        int lH = findDia(root->left);
        int rH = findDia(root->right);

        res = max(res, lH + rH);

        return 1 + max(lH, rH);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        findDia(root);
        return res;
    }
};