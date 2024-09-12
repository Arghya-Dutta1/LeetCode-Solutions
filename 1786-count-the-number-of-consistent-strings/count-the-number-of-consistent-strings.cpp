class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int c=0;
        unordered_set<char> st;
        for(auto i:allowed)
            st.insert(i);
        for(auto w:words){
            bool f=true;
            for(auto i:w)
                if(st.find(i)==st.end()){
                    f=false;
                    break;
                }
            c+=f;
        }
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();