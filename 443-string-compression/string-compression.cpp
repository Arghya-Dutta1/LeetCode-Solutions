class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==1) return 1;
        vector<char> ans;
        int n=chars.size(), c=1;
        for(int i=1;i<n;i++){
            if(chars[i]==chars[i-1]) c++;
            else{
                cout<<c<<endl;
                ans.push_back(chars[i-1]);
                if(c>1){
                    string s=to_string(c);
                    for(auto i:s)
                        ans.push_back(i);
                }
                c=1;
            }
        }
        ans.push_back(chars[n-1]);
        if(c>1){
            string s=to_string(c);
                for(auto i:s)
                    ans.push_back(i);
        }
        chars.clear();
        chars=ans;
        return ans.size();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();