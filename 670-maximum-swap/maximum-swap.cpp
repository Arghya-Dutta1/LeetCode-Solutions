class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        vector<int> li(10, -1);
        for(int i=0;i<s.size();i++)
            li[s[i]-'0']=i;

        for(int i=0;i<s.size();i++)
            for(int d=9;d>s[i]-'0';d--)
                if(li[d]>i){
                    swap(s[i], s[li[d]]);
                    return stoi(s);
                }
        return num;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();