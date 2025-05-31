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
    void helper(TreeNode* root, int &k , int &ans){

        if(root==NULL){
            return;
        }

        // do the inorder traversal 

        helper(root->left,k, ans);
       
        k--;
        
        if(k==0){
            ans = root->val;
            return ;
        }

       

        helper(root->right,k,ans);

    }
    int kthSmallest(TreeNode* root, int k) {
        // return the kth smallest 

        // [1,2,3,4]

        int ans =0;

        helper(root,k, ans);

        return ans;
    }
};