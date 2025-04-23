class Solution {
public:
    int sod(int n){
        int s=0;
        while(n!=0){
            s+=n%10;
            n/=10;
        }
        return s;
    }
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        for(int i=1;i<=n;i++){
            int sum=sod(i);
            mp[sum]++;
        }
        int mx=0, c=0;
        for(auto [i,j]:mp) mx=max(mx, j);
        for(auto [i,j]:mp) if(j==mx) c++;
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();