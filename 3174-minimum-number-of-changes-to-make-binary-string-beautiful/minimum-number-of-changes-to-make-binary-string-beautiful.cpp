class Solution {
public:
    int minChanges(string s) {
        int c=0;
        for(int i=0;i<s.size();i+=2){
            char c1=s[i], c2=s[i+1];
            if(c1!=c2) c++;
        }
        return c;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();