class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
        string temp="";
       for(char i:s1){
        if(i==' '){
            mp[temp]++;
            temp="";
        }
        else{
            temp+=i;
        }

       }
       mp[temp]++;temp="";

       for(char i:s2){
        if(i==' '){
            mp[temp]++;
            temp="";
        }
        else{
            temp+=i;
        }

       }
       mp[temp]++;temp="";

        vector<string>res;
        for(auto i:mp){
            if(i.second==1){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();