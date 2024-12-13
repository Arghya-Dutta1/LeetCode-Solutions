class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        int n=nums.size();
        set<pair<int, int>> st;
        vector<bool> m(n, false);

        for(int i=0;i<n;i++) st.insert({nums[i], i});

        for(auto& [num, i]:st)
            if(!m[i]){
                if(i>0) m[i-1]=true;
                if(i<n-1) m[i+1]=true;
                m[i]=true;
                score+=num;
            }

        return score;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();