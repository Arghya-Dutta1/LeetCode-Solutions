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
    vector<int> lvl, ht;
    vector<pair<int, int>> mx;

    int findHeight(TreeNode* root, int level){
        if(!root) return 0;

        lvl[root->val]=level;
        ht[root->val]=max(findHeight(root->left, level+1), findHeight(root->right, level+1))+1;

        if(mx[level].first<ht[root->val]){
            mx[level].second=mx[level].first;
            mx[level].first=ht[root->val];
        }
        else if(mx[level].second<ht[root->val])
            mx[level].second=ht[root->val];
        
        return ht[root->val];
    }

    vector<int> treeQueries(TreeNode* root, vector<int>& queries) {
        ht.resize(1000001);
        lvl.resize(1000001);
        mx.resize(1000001);
        vector<int> ans;

        findHeight(root, 0);

        for(auto i:queries){
            int l=lvl[i];
            int temp=l+(mx[l].first==ht[i]?mx[l].second:mx[l].first)-1;
            ans.push_back(temp);
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();