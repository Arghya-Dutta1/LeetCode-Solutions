class Solution {
public:
    vector<vector<string>> ans;

    void solve(int ind, vector<string> vs, int n){
        if(ind==n){
            ans.push_back(vs);
            return;
        }

        for(int j=0;j<n;j++){
            bool flag=true;
            for(int i=ind-1;i>=0;i--)
                if(vs[i][j]=='Q'){
                    flag=false;
                    break;
                }
        
            int i=ind-1;
            int k=j-1;
            while(i>=0&&k>=0){
                if(vs[i][k]=='Q'){
                    flag=false;
                    break;
                }
                i--;
                k--;
            }

            i=ind-1;
            k=j+1;
            while(i>=0&&k<n){
                if(vs[i][k]=='Q'){
                    flag=false;
                    break;
                }
                i--;
                k++;
            }

            if(flag){
                string s="";
                for(int i=0;i<n;i++){
                    if(i==j)
                        s+="Q";
                    else
                        s+=".";
                }
                vs.push_back(s);
                solve(ind+1, vs, n);
                vs.pop_back();
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> vs;
        solve(0, vs, n);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();