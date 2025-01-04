class Solution {
public:
    bool hasMatch(string s, string p) {
        bool ans;
        int idx=p.find('*');
        string s1=p.substr(0, idx), s2=p.substr(idx+1);

        for(int i=0;i<=s.size();++i)
            for(int j=i;j<=s.size();++j){
                string t=s.substr(i, j-i);
                if(t.size()>=s1.size()+s2.size()){
                    bool b1=s1==t.substr(0, s1.size()), b2=false;
                    if(s2.size()==0)
                        b2=true;
                    else b2=s2==t.substr(t.size()-s2.size());
                    if(b1&&b2) return true;
                }
            }

        return false;        
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();