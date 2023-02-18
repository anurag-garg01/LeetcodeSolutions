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
    
   
    TreeNode* invertTree(TreeNode* root) {
        // invert a binary tree
        // good problem but I do not like that generally 
        
        // if root is child invert m
        
        if (root == NULL)
            return root ;
        
     
        
        invertTree(root->left);
        invertTree(root->right);
       // if(root->left == NULL && root->right==NULL)
            swap(root->left,root->right);
        
        return root;
    }
};