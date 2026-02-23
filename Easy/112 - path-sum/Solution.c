/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool sum(struct TreeNode* root, int n,int t){
     if(!root)
    return false;
    t+=root->val;
      if(n==t&&!root->left&&!root->right)
    return true;

    return (sum(root->left, n,t)||sum(root->right, n,t));
}
bool hasPathSum(struct TreeNode* root, int n) {
    if(root&&n==root->val&&!root->left&&!root->right)
    return true;
    return root&&(sum(root->left, n,root->val)||sum(root->right, n,root->val));
}