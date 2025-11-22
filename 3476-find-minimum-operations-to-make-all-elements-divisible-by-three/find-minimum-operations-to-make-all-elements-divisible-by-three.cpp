class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int c=0;
        for(int i:nums){
            int r=i%3;
            c+= (r==1?1:(r==2)?1:0);
        }
        return c;        
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();