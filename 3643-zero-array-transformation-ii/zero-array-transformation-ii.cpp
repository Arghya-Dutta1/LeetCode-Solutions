class Solution {
public:
    bool check(vector<int>& nums, vector<vector<int>>& q, int k){
        vector<int> d(nums.size()+1, 0);
        for(int i=0;i<k;i++){
            d[q[i][0]]+=q[i][2];
            d[q[i][1]+1]-=q[i][2];
        }
        for(int i=0,s=0;i<nums.size();i++){
            s+=d[i];
            if(nums[i]>s) return false;
        }
        return true;
    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int l=0,r=queries.size()+1;
        while(l<r){
            int mid=(l+r)/2;
            if(check(nums, queries, mid))
                r=mid;
            else
                l=mid+1;
        }
        return l>queries.size()?-1:l;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();