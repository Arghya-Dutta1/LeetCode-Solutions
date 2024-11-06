class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int prevsb=0;
        int cmx=INT_MIN;
        int pmx=INT_MIN;
        int cmn=INT_MAX;
        for(auto& i:nums){
            int sb=__builtin_popcount(i);
            if(sb!=prevsb){
                if(pmx>cmn) return false;
                prevsb=sb;
                pmx=cmx;
                cmx=i;
                cmn=i;
            } else{
                cmx=max(cmx, i);
                cmn=min(cmn, i);
            }
        }
        return pmx<=cmn;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();