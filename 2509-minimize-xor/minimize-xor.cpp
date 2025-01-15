class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int c1=__builtin_popcount(num1);
        int c2=__builtin_popcount(num2);
        
        while(c1>c2){
            num1&=(num1-1);
            c1--;
        }

        while(c2>c1){
            num1|=(num1+1);
            c1++;
        }

        return num1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();