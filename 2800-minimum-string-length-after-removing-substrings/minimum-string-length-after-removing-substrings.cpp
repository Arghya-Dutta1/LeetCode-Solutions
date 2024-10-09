class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(!st.empty() && s[i]=='B' && st.top()=='A') st.pop();
            else if(!st.empty() && s[i]=='D' && st.top()=='C') st.pop();
            else st.push(s[i]);
        }
        return st.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();