class Solution {
public:
    long long timeToReduce(int h, int t) {
        return (long long)t*h*(h+1)/2;
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        int n=workerTimes.size();
        long long low=0, high=LLONG_MAX, ans=high;
    
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long totalHeight=0;
        
            for(int i=0;i<n;++i){
                long long lo=0, hi=mountainHeight;
                    while(lo<=hi){
                        long long m=lo+(hi-lo)/2;
                        if(timeToReduce(m, workerTimes[i])<=mid)lo=m+1;
                        else hi=m-1;
                    }
                totalHeight+=hi;
            }
        
            if (totalHeight>=mountainHeight){
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
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