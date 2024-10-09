class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        vector<int> ans;
        stack<int> st;
        st.push(ast[0]);
        for(int i=1; i<ast.size(); i++){
            if(ast[i]<0){
                bool flag=true;
                while(!st.empty() && st.top()>0 && st.top()<-1*ast[i]){
                    st.pop();
                }
                if(!st.empty() && st.top()==-1*ast[i]){
                    st.pop();
                    flag=false;
                }
                else if(!st.empty() && st.top()>-1*ast[i]){
                    flag=false;
                }
                if(flag){
                    st.push(ast[i]);
                }
            }
            else{
                st.push(ast[i]);
            }
        }

        while(st.size()>0){
            ans.insert(ans.begin(), st.top());
            st.pop();
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