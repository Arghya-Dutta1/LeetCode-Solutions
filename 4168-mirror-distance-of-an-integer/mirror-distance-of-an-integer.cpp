class Solution {
public:
    int mirrorDistance(int n) {
        int r=0, i=n;
        while(i!=0){
            r=r*10+i%10;
            i/=10;
        }
        return abs(n-r);
    }
};