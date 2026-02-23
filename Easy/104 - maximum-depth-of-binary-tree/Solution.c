/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max=0;
 void dfs(struct TreeNode* root,int c){
    if(!root){
        if(c>max)
           max=c;
         return;
    }
    c=c+1;
    dfs(root->left,c);
    dfs(root->right,c);

 }
int maxDepth(struct TreeNode* root) {
    max=0;
    dfs(root,0);
    return max;
}