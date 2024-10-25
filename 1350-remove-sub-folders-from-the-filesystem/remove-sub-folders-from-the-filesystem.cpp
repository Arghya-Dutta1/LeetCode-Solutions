class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans;

        ans.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            string cf=folder[i];
            string lf=ans.back();
            lf+='/';
            if(cf.find(lf)!=0) ans.push_back(cf);
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