class Solution {
public:
    vector<int> plusOne(vector<int>& dig) {
        vector<int> ans;
        int n=dig.size()-1;
        if(dig[n]<9){
            ++dig[n];
            return dig;
        }
        else{
            while(n>=0 && dig[n]==9){
                ans.push_back(0);
                n--;
            }
            if(n>=0){
                ans.push_back(++dig[n]);
                for(int i=n-1;i>=0;i--)
                    ans.push_back(dig[i]);
            }
            else
                ans.push_back(1);
            reverse(ans.begin(), ans.end());
            return ans;
        }
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();