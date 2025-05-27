class Solution {
public:
    int differenceOfSums(int n, int m) {
        int c1=0, c2=0;
        for(int i=1;i<=n;i++)
            if(i%m==0)
                c1+=i;
            else
                c2+=i;
        
        return c2-c1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();