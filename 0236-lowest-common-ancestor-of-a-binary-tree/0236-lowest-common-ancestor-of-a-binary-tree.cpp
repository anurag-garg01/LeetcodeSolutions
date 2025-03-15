/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* func(TreeNode* root, TreeNode* p, TreeNode* q){
        // base case 
        if(root==p || root==q || root==NULL){
            return root;
        }

        // check the condition 
        TreeNode* left = func(root->left,p,q);
        TreeNode* right =  func(root->right,p,q);

        // cases 

        if (right ==NULL){
            return left;
        }
        else if(left ==NULL){
            return right;
        }
        else 
        {
            return root;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // p =5 

        // q = 4

        return func(root,p,q);
    }
};