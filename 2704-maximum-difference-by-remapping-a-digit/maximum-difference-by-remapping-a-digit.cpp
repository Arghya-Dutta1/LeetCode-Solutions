class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num), t=s;
        char ch=s[0];
        for(auto& i:s)
            if(i==ch)
                i='0';
        for(int i=0;i<t.size();i++)
            if(t[i]!='9'){
                char c=t[i];
                for(int j=i;j<t.size();j++)
                    if(t[j]==c)
                        t[j]='9';
                return stoi(t)-stoi(s);
            }
        return num-stoi(s);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();