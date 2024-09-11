class Solution {
public:
    int minBitFlips(int start, int goal) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int c=0;
        for(int i=0;i<32;i++){
            bool a=(start>>i)&1;
            bool b=(goal>>i)&1;
            c+=(a!=b);
        }
        return c;
    }
};