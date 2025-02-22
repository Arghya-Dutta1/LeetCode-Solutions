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
    int getVal(string& s, const int& n, int& p){
        int v=0;
        while(p<n && isdigit(s[p])) v=v*10 + (s[p++]-'0');
        return v;
    }

    int getDashLen(string& s, const int& n, int& p){
        int d=0;
        while(p<n && s[p]=='-') d++, p++;
        return d;
    }

    void buildTree(TreeNode* cur, int expD, string& s, const int& n, int& p){
        if(p==n) return;
        int prevP=p, d=getDashLen(s, n, p);
        if(d<expD){
            p=prevP; 
            return;
        }
        TreeNode* node=new TreeNode(getVal(s,n,p));
        if(!cur->left) cur->left=node;
        else cur->right=node;
        buildTree(node, expD+1, s, n, p);
        buildTree(node, expD+1, s, n, p);
    }

    TreeNode* recoverFromPreorder(string traversal) {
        int n=traversal.size();
        int pos=0;
        TreeNode *root=new TreeNode(getVal(traversal,n,pos));
        
        buildTree(root,1,traversal,n,pos);
        buildTree(root,1,traversal,n,pos);
        return root;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();