/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    // function to check if two trees are equal or not

    bool check(TreeNode* root, TreeNode* subroot) {
        // base case
        // if (root == NULL) {
        //     return false;
        // }

        if(root==NULL && subroot==NULL){
            return true;
        }

        if (root == NULL && subroot != NULL) {
            return false;
        }

        if (root != NULL && subroot == NULL) {
            return false;
        }

        return ((root->val == subroot->val) &&
                check(root->left, subroot->left) &&
                check(root->right, subroot->right));
    }

    void func(TreeNode* root, TreeNode* subroot, bool& ans) {
        // base case
        if (root == NULL || ans) {
            return;
        }

        if (root->val == subroot->val) {
            bool res = check(root, subroot);

            if (res == true) {
                ans = true;
                return;
            }
        }

        func(root->left, subroot, ans);
        func(root->right, subroot, ans);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // subtree of another tree

        bool ans = false;

        func(root, subRoot, ans);

        return ans;
    }
};