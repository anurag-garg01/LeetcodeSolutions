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

    int dfs(TreeNode* root, int &maxi){
        if(root==NULL)
        return 0;


        int lhs = dfs(root->left,maxi);
        int rhs = dfs(root->right,maxi);
        
        maxi = max(maxi,lhs+rhs);
        return 1 + max(lhs,rhs);
    }


    int diameterOfBinaryTree(TreeNode* root) {
        // return the length of longest path between any two nodes
        
        int maxi = 0;

        dfs(root,maxi);

        return maxi;
    }
};

