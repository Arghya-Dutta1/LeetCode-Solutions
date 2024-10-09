class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        for(int i=0;i<32;i++){
            int m=1<<i;
            int a1=(a&m)>>i, b1=(b&m)>>i, c1=(c&m)>>i;
            if(a1==b1){
                if(a1!=c1)
                    if(a1==1) count+=2;
                    else count++;
            }
            else if((a1|b1)!=c1)
                count++;
        }
        return count;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();