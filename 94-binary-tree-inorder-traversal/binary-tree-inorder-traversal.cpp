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
    // recursive approach
    // void dfs(TreeNode* root, vector<int>& result) {
    //     if (!root) return;
    //     dfs(root->left, result);
    //     result.push_back(root->val);
    //     dfs(root->right, result);
    // }

    // iterative approach
    void interativeInorder(TreeNode* node, vector<int>& result){
       stack<TreeNode*> st;
       if(node == nullptr) return;
       while(!st.empty() || node != nullptr){
            if(node != nullptr){
                st.push(node);
                node = node->left;
            }else{
                node = st.top();
                st.pop();
                result.push_back(node->val);
                node = node->right;
            }
       }
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        // recursive approach
        // dfs(root, result);

        // Iterative approach
        interativeInorder(root, result);
        return result;
    }
};