class Solution {
public:
    bool parseBoolExpr(string expr) {
        stack<char> st;
        for(auto i:expr){
            if(i==')'){
                vector<char> ex;
                while(!st.empty() && st.top()!='('){
                    ex.push_back(st.top());
                    st.pop();
                }
                if(!st.empty())
                    st.pop();
                char sign=st.top();
                int ans;
                switch(sign){
                    case '&':
                        ans=1;
                        for(auto c:ex)
                            if(c=='f'){
                                ans=0;
                                break;
                            }
                        break;
                    case '|':
                        ans=0;
                        for(auto c:ex)
                            if(c=='t'){
                                ans=1;
                                break;
                            }
                        break;
                    case '!':
                        if(ex[0]=='f') ans=1;
                        else ans=0;
                }
                st.push((ans==0?'f':'t'));
            }
            else
                st.push(i);
        }
        return st.top()=='f'?false:true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();