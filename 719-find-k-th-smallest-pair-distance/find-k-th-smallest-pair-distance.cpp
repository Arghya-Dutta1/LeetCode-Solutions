class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0;
        int r=nums.back()-nums.front();
        while(l<r){
            int mid=(l+r)/2;
            if(fun(nums, mid)>=k)
                r=mid;
            else
                l=mid+1;
        }
        return l;
    }

    int fun(vector<int>& n, int m){
        int c=0;
        int j=1;
        for(int i=0;i<n.size();i++){
            while(j<n.size() && n[j]<=n[i]+m) ++j;
            c+=j-i-1;
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