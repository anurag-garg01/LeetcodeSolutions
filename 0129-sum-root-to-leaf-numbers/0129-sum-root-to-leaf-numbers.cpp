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
    void findSum(TreeNode* root, int temp ,int &ans){
        // here in this solution i did not put & with temp but only with answer think about it give time to it
        if(root==NULL){
            return;
        }
        
        temp=temp*10+root->val;
        cout<<temp<<" ";
        //If reached the last node
        if(root->left==NULL and root->right==NULL){
            ans+=temp;
            return ;
          //  ans-=temp;
        }
        findSum(root->left,temp,ans);
        findSum(root->right,temp,ans);
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        //Output
        int ans=0;
        int temp=0;
        findSum(root,temp,ans);
        return ans;
    }
};