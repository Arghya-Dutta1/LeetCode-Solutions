class Solution {
public:
    vector<string> ans;

    void combo(string& d, int ind, string& c, vector<string>& n){
        if(ind>=d.size()){
            ans.push_back(c);
            return;
        }

        int digit=d[ind]-'0';
        string val=n[digit-2];
        for(int i=0;i<val.size();i++){
            c.push_back(val[i]);
            combo(d, ind+1, c, n);
            c.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0)
            return {};
        vector<string> num={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string c="";
        combo(digits, 0, c, num);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();