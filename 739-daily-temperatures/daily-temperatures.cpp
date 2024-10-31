class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<vector<int>> st;
        int n=temp.size();
        vector<int> ans(n);

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temp[i]>=st.top()[0])
                st.pop();
            if(st.empty())
                ans[i]=0;
            else
                ans[i]=st.top()[1]-i;
            st.push({temp[i],i});
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