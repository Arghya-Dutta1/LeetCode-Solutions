class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(auto i:s)
            mp[i]++;
        int ans=0;
        bool h=false;
        for(auto [_, i]:mp)
            if(i%2==0) ans+=i;
            else{
                ans+=i-1;
                h=true;
            }
        return ans+h;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();