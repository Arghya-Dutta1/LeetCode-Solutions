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
    int depth(TreeNode* root, bool& ans){
        if(!root) return 0;
        int lh=depth(root->left, ans), rh=depth(root->right, ans);
        if(abs(lh-rh)>1) ans=false;
        return 1+max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        bool ans=true;
        depth(root, ans);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();