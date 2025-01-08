class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans=0;
        for(int i=0;i<words.size();i++)
            for(int j=i+1;j<words.size();j++){
                string ps=words[i];
                string tar=words[j];
                if(tar.find(ps)==0 && tar.rfind(ps)==tar.size()-ps.size())
                    ans++;
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