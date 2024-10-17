class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        bool swap=false;
        for(int j=0;j<s.size();j++){
            int idx=j;
            char mx=s[j];
            for(int i=j+1;i<s.size();i++){
                if(s[j]<s[i] && mx<=s[i]){
                    swap=true;
                    idx=i;
                    mx=s[i];
                }
            }
            if(swap){
                char ch=s[j];
                s[j]=s[idx];
                s[idx]=ch;
                break;
            }
        }
        return stoi(s);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();