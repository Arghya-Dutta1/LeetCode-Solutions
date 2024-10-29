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
    TreeNode* rebuild(vector<int>& pre, int pst, int pend, vector<int>& in, int ist, int iend, map<int, int>& mp){
        //Base Case
        if(pst > pend || ist > iend)
            return NULL;
        
        //Root is the 1st element of preorder
        TreeNode* root=new TreeNode(pre[pst]);
        int indr=mp[root->val];

        //No. of elements to the left
        int noleft=indr-ist;

        //Left subtree from pstart+1 to pstart+numsleft and from instart to rootindex-1
        root->left=rebuild(pre, pst+1, pst+noleft, in, ist, indr-1, mp);

        //Right subtree from pstart+numsleft+1 to pend and from rootindex+1 to inend
        root->right=rebuild(pre, pst+noleft+1, pend, in, indr+1, iend, mp);
        
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();

        //Mapping inorder elements to their indexes
        map<int, int>mp;
        for(int i=0;i<n;i++)
            mp[inorder[i]]=i;
        
        TreeNode* root=rebuild(preorder, 0, n-1, inorder, 0, n-1, mp);
        return root;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();