class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> f(128);
        int req=t.size(), bestLeft=-1, minl=s.size()+1;
        for(auto i:t) ++f[i];

        for(int l=0, r=0;r<s.size();r++){
            if(--f[s[r]]>=0) --req;

            while(req==0){
                if(r-l+1<minl){
                    bestLeft=l;
                    minl=r-l+1;
                }
                if(++f[s[l++]]>0) ++req;
            }
        }

        return bestLeft==-1?"":s.substr(bestLeft, minl);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();