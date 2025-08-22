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
    // recursive solution
    // void dfs(TreeNode* root, vector<int>& result) {
    //     if (!root) return;
    //     dfs(root->left, result);
    //     dfs(root->right, result);
    //     result.push_back(root->val);
    // }

    // 2 stack approach
    void TwoPostOrder(TreeNode* root, vector<int>& result){
        stack<TreeNode*> st1, st2;
        if(root == nullptr) return;
        st1.push(root);
        while(!st1.empty()){
            TreeNode* top = st1.top();
            st1.pop();
            st2.push(top);
            if(top->left != nullptr) st1.push(top->left);
            if(top->right != nullptr) st1.push(top->right);
        }
        while(!st2.empty()){
            TreeNode* top = st2.top();
            st2.pop();
            result.push_back(top->val);
        }
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        // dfs(root, result);
        TwoPostOrder(root, result);
        return result;
    }
};