class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> ps(n);
        ps[0]=nums[0];
        for(int i=1;i<n;i++)
            ps[i]=ps[i-1]+nums[i];
        for(int i=0;i<n;i++){
            if(i==0){
                if(ps[n-1]-ps[0]==0) return 0;
            }
            else if(i==n-1){
                if(ps[n-2]==0) return n-1;
            }
            else{
                if(ps[n-1]-ps[i] == ps[i-1]) return i;
            }
        }
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();