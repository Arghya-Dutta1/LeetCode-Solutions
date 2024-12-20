class Solution {
public:
    int largestRectangleArea(vector<int>& ht) {
        int n=ht.size(), ans=0;
        stack<vector<int>> st;
        vector<int> left(n, -1), right(n, n);

        st.push({-1,-1});
        
        for(int i=0;i<n;i++){
            while(!st.empty() && st.top()[0]>=ht[i])
                st.pop();
            left[i]=st.top()[1];
            st.push({ht[i], i});
        }

        while(!st.empty()) st.pop();
        st.push({-1,n});

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()[0]>=ht[i])
                st.pop();
            right[i]=st.top()[1];
            st.push({ht[i], i});
        }

        for(int i=0;i<n;i++)
            ans=max(ans, ht[i]*(right[i]-left[i]-1));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();