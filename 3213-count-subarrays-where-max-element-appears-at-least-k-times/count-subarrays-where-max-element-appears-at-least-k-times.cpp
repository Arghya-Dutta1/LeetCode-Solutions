class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long ans=0;
        int n=nums.size(), i=0, j=0, c=0;
        int mx=*max_element(nums.begin(), nums.end());
        while(j<n){
            if(nums[j]==mx) c++;
            while(c>=k){ 
                if(nums[i]==mx) c--;   
                ans+=n-j;
                i++;
            }
            j++;
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