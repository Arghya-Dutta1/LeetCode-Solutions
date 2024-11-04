class Solution {
public:
    string get(string s, int n){
        string ans="";
        while(n--){
            ans+=s;
        }
        return ans;
    }

    string decodeString(string s) {
        stack<pair<string, int>> st;
        string cur="";
        int f=0;
        for(auto i:s){
            if(isdigit(i))
                f=f*10+(i-'0');
            else{
                if(i=='['){
                    st.push({cur, f});
                    cur="";
                    f=0;
                }
                else if(i==']'){
                    auto [str, n]=st.top();
                    st.pop();
                    cur=str+get(cur, n);
                }
                else cur+=i;
            }
        }
        return cur;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();