class Solution {
public:
    int minSubArrayLen(int t, vector<int>& nums) {
        int mn=nums.size()+1;
        int i=0, j=0;
        int s=0;
        while(j<nums.size()){
            s+=nums[j];
            while(s>=t){
                mn=min(mn, j-i+1);
                s-=nums[i++];
            }
            j++;
        }
        if(mn>nums.size())
            mn=0;
        return mn;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();