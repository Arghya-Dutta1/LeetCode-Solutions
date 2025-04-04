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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root==p || root==q)
            return root;

        TreeNode* left=lowestCommonAncestor(root->left, p, q);
        TreeNode* right=lowestCommonAncestor(root->right, p, q); 

        if(!left)
            return right;
        else if(!right)
            return left;
        else
            return root;  
    }

    vector<TreeNode*> findDeep(TreeNode* root){
        vector<vector<TreeNode*>> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<TreeNode*> lvl;
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                lvl.push_back(curr);
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
            }
            ans.push_back(lvl);
        }
        return ans.back();
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root) return NULL;
        vector<TreeNode*> b=findDeep(root);
        if(b.size()==1) return b[0];
        return lowestCommonAncestor(root, b.front(), b.back());
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();