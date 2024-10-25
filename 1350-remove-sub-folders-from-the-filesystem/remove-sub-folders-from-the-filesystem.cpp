class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_set<string> st(folder.begin(), folder.end());
        vector<string> ans;
        for(auto i:folder){
            bool isSub=false;
            string temp=i;
            while(!i.empty()){
                auto pos=i.find_last_of('/');
                i=i.substr(0, pos);
                if(st.count(i)){
                    isSub=true;
                    break;
                }
            }
            if(!isSub) ans.push_back(temp);
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