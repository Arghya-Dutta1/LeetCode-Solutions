class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size();
        while(l<r){
            int md=(l+r)/2;
            if(nums[md]==target) return md;
            else if(nums[md]>target) r=md;
            else l=md+1;
        }
        return -1;
    }
};