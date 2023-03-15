/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool isCompleteTree(TreeNode *root)
        {
           	// use bfs and check the left node
           	// wrong logic 

           	// use bfs and add nodes to the level once there is a empty node there should not be any other element present after that 
            queue<TreeNode*> q;
            q.push(root);
            bool end = false;
            while (!q.empty())
            {

                TreeNode *temp = q.front();
                q.pop();

                if (temp == NULL)
                {
                    end = true;
                }
                else
                {
                    if (end)
                        return false;
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }

            return true;
        }
};