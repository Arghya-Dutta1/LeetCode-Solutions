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
int solve(vector<int> &v) {
    int swaps = 0, n = v.size();
    vector<int> temp = v;
    sort(begin(temp), end(temp));
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) mp[v[i]] = i;
    for (int i = 0; i < n; i++) {
        if (v[i] != temp[i]) {
            swaps++;
            int pos = mp[temp[i]];
            mp[v[i]] = pos;
            mp[temp[i]] = i;
            swap(v[pos], v[i]);
        }
    }
    return swaps;
}

int minimumOperations(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    int ans = 0;
    while (!q.empty()) {
        int n = q.size();
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            auto it = q.front();
            q.pop();
            v[i] = it->val;
            if (it->left) q.push(it->left);
            if (it->right) q.push(it->right);
        }
        ans += solve(v);
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