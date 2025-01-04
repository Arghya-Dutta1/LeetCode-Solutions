class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c, v=1e5;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=v){
                v=nums[i];
                c=1;
            }
            else
                c++;
            if(c>2){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();