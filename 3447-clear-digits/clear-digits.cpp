class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(auto i:s){
            if(isdigit(i) && !st.empty())
                st.pop();
            else
                st.push(i);            
        }

        string ans="";
        while(!st.empty()){
            char c=st.top();
            st.pop();
            ans=c+ans;
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