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
    bool isSymmetric(TreeNode* root) {
        return dfs(root->left, root->right);
    }

    bool dfs(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2)
            return true;
        if(!r1 || !r2)
            return false;
        bool ans=1;
        if(r1->val==r2->val){
            ans &= dfs(r1->left, r2->right);
            ans &= dfs(r1->right, r2->left);
        }
        else
            ans=0;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();