class Solution {
public:
    string compressedString(string word) {
        string ans="";
        int c=1;
        for(int i=1;i<word.size();i++){
            if(word[i-1]==word[i] && c<9)
                c++;
            else{
                ans+=to_string(c)+word[i-1];
                c=1;
            }
        }
        ans+=to_string(c)+word[word.size()-1];
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();