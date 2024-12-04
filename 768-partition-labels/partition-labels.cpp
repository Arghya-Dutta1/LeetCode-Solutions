class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        unordered_map<char, int> rm;
        int n=s.length();
        for(int i=0;i<n;i++)
            rm[s[i]]=i;
        int l=0, r=0;
        for(int i=0;i<n;i++){
            r=max(r, rm[s[i]]);
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