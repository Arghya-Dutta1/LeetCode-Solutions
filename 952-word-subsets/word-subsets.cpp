class Solution {
public:
    vector<int> counter(string& w){
        vector<int> c(26, 0);
        for(auto i:w)
            c[i-'a']++;
        return c;
    }

    bool uni(vector<int> cA, vector<int>& cB){
        for(int i=0;i<26;i++)
            if(cA[i]<cB[i])
                return false;
        return true;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> cB(26, 0);

        for(auto b:words2){
            vector<int> v=counter(b);
            for(int i=0;i<26;i++)
                cB[i]=max(cB[i], v[i]);
        }

        for(auto a:words1)
            if(uni(counter(a), cB))
                ans.push_back(a);
        
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();