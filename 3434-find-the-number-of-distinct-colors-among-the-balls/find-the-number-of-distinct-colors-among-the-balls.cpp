class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        vector<int> ans;
        unordered_map<int, int> m1, m2;

        for(auto& i:queries){
            if(m2.count(i[0])){
                m1[m2[i[0]]]--;
                if(m1[m2[i[0]]]==0)
                    m1.erase(m2[i[0]]);
            }
            m1[i[1]]++;
            m2[i[0]]=i[1];
            ans.push_back(m1.size());
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