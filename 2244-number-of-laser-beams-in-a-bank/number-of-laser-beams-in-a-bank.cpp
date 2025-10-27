class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int c=0, p=0;
        for(auto i:bank){
            int c1=0;
            for(auto ch:i)
                if(ch=='1') c1++;
            c+=(p*c1);
            p=(c1>0?c1:p);
        }
        return c;
    }
};