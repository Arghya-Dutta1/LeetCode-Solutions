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
    int pathSum(TreeNode* root, int targetSum) {
        unordered_map<long, int> mp;
        mp[0]=1;

        function<int(TreeNode*, long)> dfs=[&](TreeNode* node, long s)->int {
            if(!node) return 0;
            s+=node->val;
            int ans=mp[s-targetSum];
            mp[s]++;
            ans+=dfs(node->left, s)+dfs(node->right, s);
            mp[s]--;
            return ans;
        };

        return dfs(root, 0);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();