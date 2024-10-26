class Solution {
public:
    vector<vector<string>> ans;

    bool palin(string& s){
        string r=s;
        reverse(r.begin(), r.end());
        return r==s;
    }

    void part(vector<string>& a, string& s, int ind){
        if(ind==s.size()){
            ans.push_back(a);
            return;
        }

        string c="";

        for(int i=ind;i<s.size();i++){
        c.push_back(s[i]);
        if(palin(c)){
            a.push_back(c); 
            part(a, s, i+1);
            a.pop_back();
        }
        }  
    }

    vector<vector<string>> partition(string s) {
        vector<string> a;
        part(a, s, 0);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();