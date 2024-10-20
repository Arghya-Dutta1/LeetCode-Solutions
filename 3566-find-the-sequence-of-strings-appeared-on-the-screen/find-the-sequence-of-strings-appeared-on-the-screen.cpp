class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string st="";
        for(char i:target){
            string s="";
            char ch='a';
            do{
                ans.push_back(st+ch);
                ch++;
            }while(ch<=i);
            st+=i;
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