class Solution {
public:
    vector<int> prime;
    void sieve(){
        int n=1e3;
        vector<bool> f(n+1, true);
        for(int p=2;p*p<=n;p++)
            if(f[p])
                for(int i=p*p;i<=n;i+=p)
                    f[i]=false;
        for(int p=2;p<=n;p++)
            if(f[p]) prime.push_back(p);
    }
    bool primeSubOperation(vector<int>& nums) {
        sieve();
        auto it=lower_bound(prime.begin(), prime.end(), nums[0]);
        if(it!=prime.begin())
            it--;
        if(*it<nums[0])    
            nums[0]-=*it;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                auto it=lower_bound(prime.begin(), prime.end(), nums[i]-nums[i-1]-1);
                if(it!=prime.begin() && nums[i]-*it<=nums[i-1])
                    it--;
                if(nums[i]-*it>nums[i-1])
                    nums[i]-=*it;
            }
        }
        for(int i=1;i<nums.size();i++)
            if(nums[i]<=nums[i-1]) return false;
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();