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
    string tree2str(TreeNode* root) {
        string ans;
        constructString(root, ans);
        return ans;
    }
    
    void constructString(TreeNode *root, string &ans) {
        if(root == NULL) return;
        
        ans += to_string(root->val);
        
        if(root->left == NULL && root->right == NULL) return;
        
        ans.push_back('(');
        constructString(root->left, ans);
        ans.push_back(')');

        if(root->right) {
            ans.push_back('(');
            constructString(root->right, ans);
            ans.push_back(')');
        }
    }
};