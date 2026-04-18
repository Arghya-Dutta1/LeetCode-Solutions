class Solution {
public:
    int mirrorDistance(int n) {
        int r=0, i=n;
        while(i!=0){
            int rem=i%10;
            r=r*10+rem;
            i/=10;
        }
        return abs(n-r);
    }
};