/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isValidBST(struct TreeNode* root) {
    if(root->right==NULL&&root->left==NULL)
       return 1;
    else if(root->right==NULL &&root->left->val<root->val)
       return 1&&isValidBST(root->left);
    else if(root->left==NULL &&root->right->val>root->val)
       return 1&&isValidBST(root->right);
    else if(root->left!=NULL&&root->right!=NULL&&root->left->val<root->val&&root->right->val>root->val)
       return 1&&isValidBST(root->right)&&isValidBST(root->left);
    else
        return 0;
}