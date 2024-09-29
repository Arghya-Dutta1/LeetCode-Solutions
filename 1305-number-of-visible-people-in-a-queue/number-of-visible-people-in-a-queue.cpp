class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& ht) {
        int n=ht.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && ht[st.top()]<=ht[i]){
                ans[st.top()]++;
                st.pop();
            }
            if(!st.empty())
                ans[st.top()]++;
            st.push(i);
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