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
    TreeNode* func(vector<int> nums,int low,int high){
         if(low>high){
            return NULL;
        }
        
        int mid = (low + high)/2;


        TreeNode* root = new TreeNode(nums[mid]);

        root->left  = func(nums,low,mid-1);
        root->right = func(nums,mid+1,high);


        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // inorder of tree  gives the sorted array 
        // convert into height balanced bst  

        // sorted array into the bst 

        // if(root==NULL){
        //     return root;
        // }
        int n = nums.size();

        return func(nums,0,n-1);
    }
};