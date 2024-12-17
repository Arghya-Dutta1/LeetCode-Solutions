class Solution {
public:
    string repeatLimitedString(string s, int r) {
        string ans="";
        vector<int> f(26, 0);
        for(auto i:s) f[i-'a']++;

        int i=25;
        while(i>=0){
            if(f[i]==0){
                i--;
                continue;
            }

            char ch='a'+i;
            int c=min(f[i], r);

            ans.append(c, ch);
            f[i]-=c;

            if(f[i]>0){
                int j=i-1;
                while(j>=0 && f[j]==0) j--;

                if(j<0) break;
                ans.push_back('a'+j);
                f[j]--;
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