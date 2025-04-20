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
    bool func(TreeNode* p, TreeNode* q){

        if(p==NULL && q==NULL){
            return true;
        }

        // check the cases 
        if(p==NULL && q!=NULL){
            return false;
        }

        if(p!=NULL && q==NULL){
            return false;
        }



        return ((p->val==q->val) && func(p->left,q->right) && func(p->right,q->left));

    }


    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        // return if tree is symmetric or not 
        return func(root->left,root->right);


    }

};