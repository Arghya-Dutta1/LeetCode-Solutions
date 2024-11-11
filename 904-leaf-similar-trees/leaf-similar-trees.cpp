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
    vector<int> l;
    void dfs(TreeNode* root){
        if(!root) return;
        dfs(root->left);
        if(!root->left && !root->right)
            l.push_back(root->val);
        dfs(root->right);
    }
    bool check(vector<int>& l1, vector<int>& l2){
        if(l1.size()!=l2.size()) return false;
        for(int i=0;i<l1.size();i++)
            if(l1[i]!=l2[i]) return false;
        return true;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs(root1);
        vector<int> l1=l;
        l.clear();
        dfs(root2);
        vector<int> l2=l;
        return check(l1, l2);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();