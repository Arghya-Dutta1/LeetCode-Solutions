class Solution {
public:
    vector<int> div(int n){
        vector<int> ans={0};
        int s=0;
        for(int i=1;i*i<=n;i++)
            if(n%i==0){
                s+=i;
                int r=n/i;
                s+=r;
                if(i==r){
                    s-=r;
                    ans[0]++;
                }
                else
                    ans[0]+=2;
            }
        ans.push_back(s);
        return ans;
    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto i:nums){
            vector<int> v=div(i);
            if(v[0]==4) ans+=v[1];
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