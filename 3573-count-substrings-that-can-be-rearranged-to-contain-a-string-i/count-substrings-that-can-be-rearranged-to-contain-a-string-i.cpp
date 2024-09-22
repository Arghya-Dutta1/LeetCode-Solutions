class Solution {
public:
    long long validSubstringCount(string word1, string word2) {
        vector<int> f(26, 0), w(26, 0);
        for(auto c:word2)
            f[c-'a']++;
        long long s=0;
        int n=word2.length();
        int l=0;
        for(int i=0;i<word1.length();i++){
            char c=word1[i];
            if(f[c-'a']>0 && w[c-'a']<f[c-'a'])
                n--;
            w[c-'a']++;
            while(n==0){
                s+=word1.length()-i;
                char sc=word1[l];
                w[sc-'a']--;
                if(f[sc-'a']>0 && w[sc-'a']<f[sc-'a'])
                    n++;
                l++;
            }
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