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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp = root;
        TreeNode* last = nullptr;
        if(!root){
            return new TreeNode(val);
        }
        while(temp){
            last = temp;
            if(val>temp->val){
                temp = temp->right;
            }else{
                temp = temp->left;
            }
        }
        if(last->val > val){
            last->left = new TreeNode(val);
        }
        else{
            last->right = new TreeNode(val);
        }
        return root;
    }
};