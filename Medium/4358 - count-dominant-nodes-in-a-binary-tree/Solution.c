/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int ans;
int dom(struct TreeNode* root){
    if(!root){
        return -1;
    }
    int l=dom(root->left);
    int r =dom(root->right);
    if(root->val>=l&&root->val>=r){
        ++ans;
        return root->val;
    }
    return ((l>=r)?l:r);
}
int countDominantNodes(struct TreeNode* root) {
    ans=0;
    int tem =dom(root);
    return ans;
}