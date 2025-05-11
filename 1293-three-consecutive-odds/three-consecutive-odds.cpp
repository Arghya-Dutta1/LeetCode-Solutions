class Solution {
public:
    bool odd(int a){
        return a%2!=0;
    }
    bool threeConsecutiveOdds(vector<int>& a) {
        if(a.size()<3)
            return false;
        for(int i=0;i<=a.size()-3;i++)
            if(odd(a[i]) && odd(a[i+1]) && odd(a[i+2]))
                return true;
        return false;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();