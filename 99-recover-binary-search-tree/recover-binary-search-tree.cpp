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
    TreeNode* pred=nullptr;
    TreeNode* x=nullptr;
    TreeNode* y=nullptr;
    void recoverTree(TreeNode* root) {
        inorder(root);
        swap(x,y);
    }

    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        if(pred && root->val < pred->val){
            y=root;
            if(!x)
                x=pred;
            else
                return;
        }
        pred=root;
        inorder(root->right);
    }

    void swap(TreeNode* a, TreeNode* b){
        int temp=a->val;
        a->val=b->val;
        b->val=temp;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();