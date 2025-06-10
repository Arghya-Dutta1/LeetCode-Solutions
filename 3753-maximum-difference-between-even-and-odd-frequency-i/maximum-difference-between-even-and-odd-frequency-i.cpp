class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for(auto i:s) mp[i]++;
        int em=INT_MIN, emn=INT_MAX, om=INT_MIN, omn=INT_MAX;
        for(auto& [i,j]:mp){
            if(j%2==0){
                em=max(em,j);
                emn=min(emn,j);
            }
            else{
                om=max(om,j);
                omn=min(omn,j);
            }
        }       
        return om-emn;            
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();