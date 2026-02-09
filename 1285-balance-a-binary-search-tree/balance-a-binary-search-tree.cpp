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

    void in(TreeNode* root, vector<int>& v){
        if(!root)
            return;
        
        in(root->left, v);
        v.push_back(root->val);
        in(root->right, v);
    }

    TreeNode* con(int l, int r, vector<int>& v){
        if(l>r)
            return NULL;

        int m=l+(r-l)/2;

        TreeNode* root = new TreeNode(v[m]);
        root->left=con(l, m-1, v);
        root->right=con(m+1, r, v);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> v;
        in(root, v);

        int l=0;
        int r=v.size()-1;
        return con(l, r, v);
    }
};