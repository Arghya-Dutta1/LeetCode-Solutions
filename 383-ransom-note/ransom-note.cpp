class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m1,m2;
        for(auto i:ransomNote) m1[i]++;
        for(auto i:magazine) m2[i]++;
        for(auto [i,j]:m1){
            if(m2.count(i)){
                if(j>m2[i]) 
                    return false;
            }
            else
                return false;
        }
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();