class Solution {
public:
    vector<string> ans;

    void gen(string& tmp, int s, int n){
        if(n==0){
            if(s==0)
                ans.push_back(tmp);
            return;
        }
        
        tmp.push_back('(');
        gen(tmp, s+1, n-1);
        tmp.pop_back();

        if(s>0){
            tmp.push_back(')');
            gen(tmp, s-1, n-1);
            tmp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        string str="";
        gen(str, 0, 2*n);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();