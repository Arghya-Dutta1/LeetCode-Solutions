class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.size();i++)
            if(isdigit(s[i])){
                char ch=s[i-1];
                int n=s[i]-'0';
                ch+=n;
                ans+=ch;
            }
            else
                ans+=s[i];
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();