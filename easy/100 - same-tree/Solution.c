/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if(p==NULL&&q==NULL)
        return true;
    else if((p!=NULL&&q==NULL)||(p==NULL&&q!=NULL))
        return false;
    else if(isSameTree(p->left,q->left)&&isSameTree(p->right,q->right))
        return p->val==q->val;
    else 
        return false;
}