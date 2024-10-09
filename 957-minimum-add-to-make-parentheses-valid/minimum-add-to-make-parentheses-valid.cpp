class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(auto i:s){
            if(i=='(')
                st.push(i);
            else{
                if(st.empty()) ans++;
                else st.pop();
            }
        }
        return st.empty()?ans:st.size()+ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();