class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num), s1=s;
        sort(s.begin(), s.end());
        reverse(s.begin(), s.end());
        if(s==s1) return num;

        char n1, n2;
        int i;
        for(i=0;i<s.size();i++)
            if(s[i]!=s1[i]){
                n1=s[i];
                n2=s1[i];
                break;
            }
        for(int i=0;i<s.size();i++)
            if(s1[i]==n2){
                s1[i]=n1;
                break;
            }
        for(int i=s.size()-1;i>=0;i--)
            if(s1[i]==n1){
                s1[i]=n2;
                break;
            }
        return stoi(s1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();