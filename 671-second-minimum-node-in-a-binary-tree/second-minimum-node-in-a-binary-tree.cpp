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
    set<int> st;

    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        st.insert(root->val);
        inorder(root->right);
    }

    int findSecondMinimumValue(TreeNode* root) {
        inorder(root);
        int ans=-1, c=0;
        auto it=st.begin();
        while(it!=st.end()){
            if(++c==2){
                ans=*it;
                break;
            }
            it++;
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