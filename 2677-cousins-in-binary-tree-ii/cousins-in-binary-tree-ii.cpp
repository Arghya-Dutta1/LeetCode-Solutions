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
    TreeNode* replaceValueInTree(TreeNode* root) {
        if(!root) return root;
        vector<int> ls;
        queue<TreeNode*> q;
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

        q.push(root);
        root->val=0;
        int l=1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode* cur=q.front();
                q.pop();
                int ss=0;
                if(cur->left) ss+=cur->left->val;
                if(cur->right) ss+=cur->right->val;

                if(cur->left){
                    cur->left->val=ls[l]-ss;
                    q.push(cur->left);
                }
                if(cur->right){
                    cur->right->val=ls[l]-ss;
                    q.push(cur->right);
                }
            }
            l++;
        }

        return root;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();