/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int min;
void trs(struct TreeNode* root,int c){
    if(!root)
        return;
    c++;
    if(min>c&&!root->left&&!root->right){
        min=c;
        return;
    }
    trs(root->left,c);
    trs(root->right,c);

}

int minDepth(struct TreeNode* root) {
     if(!root)
        return 0;
    min=INT_MAX;
    trs(root,0);
    return min;
}