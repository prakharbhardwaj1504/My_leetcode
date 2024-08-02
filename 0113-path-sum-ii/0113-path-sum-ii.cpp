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
    void solve(TreeNode* root, int& targetsum, int& sum, vector<vector<int>> & ans,vector<int> sans) {
        if (root == NULL) {
            return;
        }
        sum += root->val;
        sans.push_back(root->val);
        if (sum == targetsum && (root->right == NULL && root->left == NULL)) {
            
            ans.push_back(sans);
            sans.clear();
        }
        solve(root->left, targetsum, sum, ans,sans);
        solve(root->right, targetsum, sum, ans,sans);
        sum -= root->val;
        if(sans.size()!=0){
        sans.pop_back();}
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       
        int sum = 0;
        vector<vector<int>> ans;
        vector<int> sans;
        solve(root, targetSum, sum, ans,sans);
        return ans;
    }
};