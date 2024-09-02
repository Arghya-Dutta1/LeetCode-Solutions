class Solution {
public:
    string stringHash(string s, int k) {
        string ans;
        int i=0;
        while(i<s.size()){
            string sub=s.substr(i, k);
            int sum=0;
            for(auto i:sub){
                sum+=i-'a';
            }
            sum%=26;
            ans+=(char)(sum+'a');
            i+=k;
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