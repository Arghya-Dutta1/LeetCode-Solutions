class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int x=0;
        for(auto i:nums)
            if(i%2==0)
                x|=i;
        return x;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();