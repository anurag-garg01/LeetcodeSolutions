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
    int dfs(TreeNode* node, int& maxi){
        if(node==NULL)
        return 0;

        int lhs = max(0,dfs(node->left,maxi));
        int rhs = max(0,dfs(node->right, maxi));

        maxi = max(maxi, lhs+rhs+node->val);


        return node->val + max(lhs,rhs);

    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        dfs(root,maxi);
        return maxi;
    }
};