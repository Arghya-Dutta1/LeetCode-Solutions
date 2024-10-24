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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> ls;
        q.push(root);
        while(!q.empty()){
            int cs=0;
            int n=q.size();
            while(n--){
                TreeNode* cur=q.front();
                q.pop();
                cs+=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ls.push_back(cs);
        }

        int idx=0, mx=ls[0];
        for(int i=1;i<ls.size();i++)
            if(ls[i]>mx){
                mx=ls[i];
                idx=i;
            }
        return idx+1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();