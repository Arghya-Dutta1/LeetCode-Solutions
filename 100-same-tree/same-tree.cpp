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
    bool ans;
    void dfs(TreeNode* r1, TreeNode* r2){
        if(!r1 && !r2) return;
        if(!r1 || !r2 || r1->val!=r2->val){
            ans=false;
            return;
        }
        dfs(r1->left, r2->left);
        dfs(r1->right, r2->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        ans=true;
        dfs(p,q);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();