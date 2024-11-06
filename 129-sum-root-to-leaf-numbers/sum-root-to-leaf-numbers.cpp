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
    void dfs(TreeNode* root, int n, int& ans){
        if(!root) return;
        if(!root->right && !root->left) ans+=n*10+root->val;

        dfs(root->left, n*10+root->val, ans);
        dfs(root->right, n*10+root->val, ans);
    }

    int sumNumbers(TreeNode* root) {
        int ans=0;
        dfs(root, 0, ans);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();