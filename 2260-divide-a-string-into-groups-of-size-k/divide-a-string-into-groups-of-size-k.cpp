class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int idx=0, n=s.size();
        vector<string> ans;
        while(idx+k<n){
            string s1=s.substr(idx, k);
            ans.push_back(s1);
            idx+=k;
        }
        if(idx<n){
            string s2=s.substr(idx);
            while(s2.size()!=k)
                s2+=fill;
            ans.push_back(s2);
        }
        return ans;
    }
};