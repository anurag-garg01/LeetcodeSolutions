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
    void func(TreeNode* root){
        // base case 
        if(root==NULL){
            return ;
        }

        // post order traversal 

        func(root->left);
        func(root->right);


        swap(root->left, root->right);



    }
    TreeNode* invertTree(TreeNode* root) {
         func(root);

         return root;
    }
};