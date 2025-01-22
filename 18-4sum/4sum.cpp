class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n<4) return ans;
        ranges::sort(nums);

        for(int i=0; i<n-3; i++){
            if(i && nums[i]==nums[i-1])
                continue;

            for(int j=i+1; j<n-2; j++){
                if (j>i+1 && nums[j]==nums[j-1])
                    continue;
                
                int k=j+1, l=n-1;
                while(k<l){
                    long long x=(long long) nums[i]+nums[j]+nums[k]+nums[l];
                    if (x<target) k++;
                    else if (x > target) l--;
                    else{
                        ans.push_back({nums[i], nums[j], nums[k++], nums[l--]});
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }
                }
            }
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