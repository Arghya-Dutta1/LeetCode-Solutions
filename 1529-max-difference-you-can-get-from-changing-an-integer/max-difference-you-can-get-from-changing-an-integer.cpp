class Solution {
public:
    int maxDiff(int num) {
        string s=to_string(num);
        string t=s;
        for(auto& i:t)
            if(i!='9'){
                char c=i;
                for(auto& j:t)
                    if(j==c)
                        j='9';
                break;
            }
        string u=s;
        if(u[0]!='1'){
            char c=u[0];
            for(char& i:u)
                if (i==c)
                    i='1';
        }
        else{
            for(int i=1; i<u.size(); i++){
                if(u[i]!='0' && u[i]!='1'){
                    char c=u[i];
                    for(int j=1; j<u.size(); j++)
                        if(u[j]==c) 
                            u[j]='0';
                    break;
                }
            }
        }      
        return stoi(t)-stoi(u);   
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();