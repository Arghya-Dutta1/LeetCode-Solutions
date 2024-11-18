class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int> ans;
        int n=code.size();
        if(k>0){
            for(int i=0;i<n;i++){
                int s=0;
                for(int j=i+1;j<=i+k;j++)
                    s+=code[j%n];
                ans.push_back(s);
            }
        }
        else if(k<0){
            for(int i=0;i<n;i++){
                int s=0;
                for(int j=i-1;j>=i+k;j--){
                    int idx=j;
                    if(j<0) idx+=n;
                    s+=code[idx];
                }
                ans.push_back(s);
            }
        }
        else
            ans.resize(code.size(), 0);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();