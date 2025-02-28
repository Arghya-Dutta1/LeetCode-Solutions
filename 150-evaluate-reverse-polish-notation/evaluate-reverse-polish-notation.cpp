class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto& i:tokens)
            if(isdigit(i[0]) || (i.size()>1 && i[0]=='-'))
                st.push(stoi(i));
            else{
                int t=0, f=st.top();
                st.pop();
                int s=st.top();
                st.pop();
                switch(i[0]){
                    case '+':
                        t=s+f;
                        break;
                    case '-':
                        t=s-f;
                        break;
                    case '*':
                        t=s*f;
                        break;
                    case '/':
                        t=s/f;
                }
                st.push(t);
            }
        return st.top();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();