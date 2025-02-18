class Solution {
public:
    string smallestNumber(string pattern) {
        string ans="";
        stack<char> st{{'1'}};
        for(auto i:pattern){
            char t=st.top();
            if(i=='I')
                while(!st.empty()){
                    t=max(t, st.top());
                    ans+=st.top();
                    st.pop();
                }
            st.push(t+1);
        }

        while(!st.empty())
            ans+=st.top(), st.pop();
        return ans;    
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();