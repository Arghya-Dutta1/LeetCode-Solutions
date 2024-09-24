class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string> st;
        int ans=0;
        for(auto i:arr1){
            string s=to_string(i);
            for(int j=0;j<s.length();j++){
                string sub=s.substr(0, s.length()-j);
                st.insert(sub);
            }
        }
        for(auto i:arr2){
            string s=to_string(i);
            for(int j=0;j<s.length();j++){
                string sub=s.substr(0, s.length()-j);
                if(st.count(sub))
                    ans=max(ans, (int)sub.length());
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