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

    void bfstrav(TreeNode* root, vector<int> &ans){
        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){

            int size = q.size();
            int maxi = INT_MIN;
            for(int i =0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();

                if(temp->left!=NULL){
                    q.push(temp->left);
                }


                if(temp->right!=NULL){
                    q.push(temp->right);
                }

                maxi = max(temp->val,maxi);


            }

            ans.push_back(maxi);
        }
    }
    vector<int> largestValues(TreeNode* root) {
        // largest value in each row , you can sovle it using bfs traversal 


        vector<int> ans;
        if(root==NULL)
            return ans;

        
        bfstrav(root,ans);


        return ans;
    }
};