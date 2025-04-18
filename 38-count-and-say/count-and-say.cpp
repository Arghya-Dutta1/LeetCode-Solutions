class Solution {
public:
    string func(string s){
        vector<pair<char, int>> p;
        int c=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]) c++;
            else{
                p.push_back({s[i-1],c});
                c=1;
            }
        }
        p.push_back({s[s.size()-1],c});
        string ans="";
        for(auto& [i,j]:p){
            ans+=(char)(j+48);
            ans+=i;
        }
        cout<<ans<<endl;
        return ans;
    }

    string countAndSay(int n) {
        string s="1";
        while(--n){
            s=func(s);
        }
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();