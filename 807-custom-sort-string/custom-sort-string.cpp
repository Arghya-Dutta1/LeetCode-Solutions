class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char, int> mp;
        for(auto i:s) mp[i]++;
        for(auto i:order){
            if(mp.count(i)){
                for(int c=0;c<mp[i];c++)
                    ans+=i;
                mp.erase(i);
            }
        }
        for(auto [i,j]:mp)
            for(int c=0;c<j;c++)
                    ans+=i;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();