class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<long long> st(nums.begin(), nums.end());
        int ans=INT_MIN, p=1;
        ranges::sort(nums);
        for(auto i:nums){
            long long j=(long long)i*i;
            int c=1, it=0;;
            while(j<=nums.back() && it<5){
                if(st.count(j)){
                    cout<<j<<endl;
                    j*=j;
                    c++;
                }
                else break;
                it++;
            }
            if(c>=2) ans=max(ans, c);
        }
        return ans==INT_MIN?-1:ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();