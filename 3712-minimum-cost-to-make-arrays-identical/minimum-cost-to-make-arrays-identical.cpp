class Solution {
public:
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        int n=arr.size();
        long long ans=0LL;  
        for(int i=0;i<n;i++)
            ans+=abs(arr[i]-brr[i]);
        if(n>1){
            ranges::sort(arr);
            sort(brr.begin(), brr.end());
            long long s=k;
            for(int i=0;i<n;i++)
                s+=abs(arr[i]-brr[i]);    
            return min(s, ans);
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();