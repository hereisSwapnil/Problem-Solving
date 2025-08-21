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
    // Recursive Approach
    // void dfs(TreeNode* root, vector<int>& result){
    //     if(!root){
    //         return;
    //     }
    //     result.push_back(root->val);
    //     dfs(root->left, result);
    //     dfs(root->right, result);
    // }

    // Iterative Approach
    void iterativePre(TreeNode* root, vector<int>& result){
        stack<TreeNode*> st;
        if(root == NULL){
            return;
        }
        st.push(root);
        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();
            result.push_back(node->val);
            if(node->right != NULL) st.push(node->right);
            if(node->left != NULL) st.push(node->left);
        }
        return;
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        // Recursive Approach
        // dfs(root, result);
        // Iterative Approach
        iterativePre(root, result);
        return result;
    }
};