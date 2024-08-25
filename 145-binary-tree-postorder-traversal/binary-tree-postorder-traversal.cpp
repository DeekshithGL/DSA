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
private:
    vector<int> result;
    void solve(TreeNode *root)
    {
        if(!root)
            return ;

        if(root -> left)
            solve(root -> left);

        if(root -> right)
            solve(root -> right);

        result.push_back(root -> val);
    }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        solve(root);

        return result;
    }
};