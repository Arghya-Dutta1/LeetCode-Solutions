class Solution {
public:
    bool hasSameDigits(string s) {
        while(true){
            string s2="";
            for(int i=0;i<s.size()-1;i++){
                int a=s[i]-'0', b=s[i+1]-'0';
                int sum=(a+b)%10;
                s2+=(char)(sum+'0');
            }
            s=s2;
            if(s.size()==2) break;
        }
        return s[0]==s[1];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();