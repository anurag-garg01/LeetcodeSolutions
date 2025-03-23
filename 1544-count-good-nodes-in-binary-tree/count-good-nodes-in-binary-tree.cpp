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
    void func(TreeNode* root, int &ans, int maxi){
        if (root==NULL){
            return ;
        }

        if(root->val >=maxi){
            ans++;
            maxi = max(maxi,root->val);
        }

        func(root->left,ans,maxi);
        func(root->right,ans,maxi);

    }


    int goodNodes(TreeNode* root) {
        // Iterating over all the nodes 
        // tc : o(n) sc : o(n)
        // return the good nodes 
        int ans =0;
        int maxi = INT_MIN;
        func(root, ans, maxi);


        return ans;
    }
};