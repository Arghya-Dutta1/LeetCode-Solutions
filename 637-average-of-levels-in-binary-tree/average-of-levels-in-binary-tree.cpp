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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);
        int cl=0;
        while(!q.empty()){
            int l=q.size();
            double avg=0.0;
            for(int i=0;i<l;i++){
                TreeNode* n=q.front();
                q.pop();
                avg+=n->val;
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            avg/=(l*1.0);
            ans.push_back(avg);
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