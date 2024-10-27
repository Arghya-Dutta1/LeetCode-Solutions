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
    int ans=INT_MIN;

    void pre(TreeNode* root){
        if(!root)
            return;
        pre(root->left);
        int d=depthSum(root);
        pre(root->right);
    }

    int maxPathSum(TreeNode* root) {
        pre(root);
        return ans;
    }

    int depthSum(TreeNode* root){
        if(!root)
            return 0;
        int ls=max(0, depthSum(root->left));
        int rs=max(0, depthSum(root->right));
        ans = max(ans, ls+rs+root->val);
        return max(ls,rs)+root->val;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();