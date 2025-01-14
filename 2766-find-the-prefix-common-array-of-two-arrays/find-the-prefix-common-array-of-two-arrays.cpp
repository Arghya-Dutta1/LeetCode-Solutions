class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int pre=0;
        vector<int> ans, count(A.size()+1);

        for(int i=0;i<A.size();i++){
            if(++count[A[i]]==2) pre++;
            if(++count[B[i]]==2) pre++;
            ans.push_back(pre);
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