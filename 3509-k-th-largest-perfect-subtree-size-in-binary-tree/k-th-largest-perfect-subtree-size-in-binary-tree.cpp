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
    pair<bool, int> isP(TreeNode* root){
        if(!root) return {1, 0};

        auto l=isP(root->left);
        auto r=isP(root->right);

        if(l.first && r.first && l.second == r.second)
            return {1, l.second+r.second+1};
        return {0, 0};
    }

    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        vector<int> sizes;
        Tsize(root, sizes);
        if(sizes.empty()) return -1;
        sort(sizes.rbegin(), sizes.rend());
        int s=sizes.size();
        return k<=s?sizes[k-1]:-1;
    }

    void Tsize(TreeNode* root, vector<int>& s){
        if(!root) return;
        auto ans=isP(root);
        if(ans.first) s.push_back(ans.second);
        Tsize(root->left, s);
        Tsize(root->right, s);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();