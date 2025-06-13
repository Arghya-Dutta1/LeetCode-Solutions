class Solution {
public:
    bool func(vector<int>& nums, int m, int p){
        int n=nums.size(), i=0, c=0;
        while(i<n-1){
            if(nums[i+1]-nums[i]<=m){
                c++;
                i+=2;
            }
            else
                i++;
        }
        return c>=p;
    }

    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        ranges::sort(nums);
        int l=0, r=nums[n-1]-nums[0], ans=INT_MAX;
        while(l<=r){
            int m=(l+r)/2;
            if(func(nums, m, p)){
                ans=m;
                r=m-1;
            }
            else
                l=m+1;
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