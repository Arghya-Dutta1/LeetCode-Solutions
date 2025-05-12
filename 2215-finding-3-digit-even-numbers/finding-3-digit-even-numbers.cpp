class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int, int> m;
        for(auto i:digits) m[i]++;
        vector<int> ans;
        for(int i=100;i<999;i+=2){
            bool f=true;
            int n=i;
            unordered_map<int, int> mp=m;
            while(n!=0 && f){
                int r=n%10;
                if(!mp.count(r)) f=false;
                else{
                    mp[r]--;
                    if(mp[r]==0) mp.erase(r);
                }
                n/=10;
            }
            if(f) ans.push_back(i);
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();