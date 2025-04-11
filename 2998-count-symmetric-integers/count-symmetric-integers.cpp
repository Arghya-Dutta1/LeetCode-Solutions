class Solution {
public:
    int sum(int n){
        int s=0;
        while(n!=0) s+=n%10, n/=10;
        return s;
    }
    int countSymmetricIntegers(int low, int high) {
        int ans=0, n;
        string s;
        for(int i=low;i<=high;i++) if((s=to_string(i))!="" && (n=s.size())%2==0 && sum(stoi(s.substr(0,n/2)))==sum(stoi(s.substr(n/2)))) ans++;
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();