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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if(!root){
            return res;
        }
        q.push(root);
        bool rightToLeft = false;
        while(!q.empty()){
            int size = q.size();
            vector<int> vec(size);
            for(int i = 0; i<size; i++){
                TreeNode* node = q.front();
                if(node->left != nullptr){
                    q.push(node->left);
                }
                if(node->right != nullptr){
                    q.push(node->right);
                }
                q.pop();
                int pos;
                if(rightToLeft){
                    pos = size - 1 - i;
                }else{
                    pos = i;
                }
                vec[pos] = node->val;
            }
            if(rightToLeft){
                rightToLeft = false;
            }else{
                rightToLeft = true;
            }
            res.push_back(vec);
        }
        return res;
    }
};