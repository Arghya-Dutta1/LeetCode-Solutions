class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, count(128);
        int req=p.size();
        for(auto c:p) ++count[c];

        for(int l=0,r=0;r<s.size();r++){
            if(--count[s[r]]>=0) --req;

            while(req==0){
                if(r-l+1==p.size()) ans.push_back(l);
                if(++count[s[l++]]>0) ++req;
            }
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