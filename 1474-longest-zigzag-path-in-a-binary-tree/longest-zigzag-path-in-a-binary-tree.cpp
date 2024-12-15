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

struct T {
    int lmx;
    int rmx;
    int submx;
};

class Solution {
public:
    int longestZigZag(TreeNode* root) {
        return dfs(root).submx;
    }

    T dfs(TreeNode* root){
        if(!root) return {-1, -1, -1};
        T l=dfs(root->left);
        T r=dfs(root->right);
        int lzzag=l.rmx+1;
        int rzzag=r.lmx+1;
        int sub=max({lzzag, rzzag, l.submx, r.submx});
        return {lzzag, rzzag, sub};
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();