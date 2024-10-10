class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.length(), n2=word2.length();
        int i=0,j=0;
        string s="";
        while(i<n1 || j<n2){
            if(i<n1)
                s+=word1[i++];
            if(j<n2)
                s+=word2[j++];
        }
        return s;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();