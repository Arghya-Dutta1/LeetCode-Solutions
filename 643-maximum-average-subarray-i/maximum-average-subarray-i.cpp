class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0.0;
        int s=0;
        for(int i=0;i<k;i++)
            s+=nums[i];
        avg=s/(k*1.0);
        for(int i=k;i<nums.size();i++){
            s-=nums[i-k];
            s+=nums[i];
            double na=s/(k*1.0);
            avg=max(avg, na);
        }
        return avg;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();