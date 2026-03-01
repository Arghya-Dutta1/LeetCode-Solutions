class Solution {
public:
    int minPartitions(string n) {
        int mx=0;
        for(char i:n){
            int a= (i-48);
            mx=max(mx, a);
        }
        return mx;
    }
};