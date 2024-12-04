class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<int> rm(26);
        int n=s.length();
        for(int i=0;i<n;i++)
            rm[s[i]-'a']=i;
        int l=0, r=0;
        for(int i=0;i<n;i++){
            r=max(r, rm[s[i]-'a']);
            if(r==i){
                ans.push_back(i-l+1);
                l=i+1;
            }
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