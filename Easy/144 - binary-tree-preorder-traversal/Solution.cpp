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
    void trs( vector<int> &ans,TreeNode* root){
    if(!root)
        return;
    ans.push_back(root->val);
     trs(ans,root->left);
      trs(ans,root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        trs(ans,root);
        return ans;
    }
};