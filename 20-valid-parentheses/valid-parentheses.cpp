class Solution {
public:
    char pop(stack<char>& s){
        char c=s.top();
        s.pop();
        return c;
    }

    bool isValid(string s) {
        stack<char> st;
        for(char i:s){
            if(i == '(')
                st.push(')');
            else if(i == '{')
                st.push('}');
            else if(i == '[')
                st.push(']');
            else if(st.empty() || pop(st)!=i)
                return false;
        }
        return st.empty();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();