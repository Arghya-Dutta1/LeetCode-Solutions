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
    void inorder(TreeNode* root, int k, int& ans, int& rank){
        if(!root) return;
        inorder(root->left, k, ans, rank);
        if(++rank==k){
            ans=root->val;
            return;
        }
        inorder(root->right, k, ans, rank);
    }

    int kthSmallest(TreeNode* root, int k) {
        int ans=-1, rank=0;
        inorder(root, k, ans, rank);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();