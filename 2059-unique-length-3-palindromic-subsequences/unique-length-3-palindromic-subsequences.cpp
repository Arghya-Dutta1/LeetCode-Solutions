class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans=0, n=s.size();
        int left[26]={}, right[26]={}, seen[26][26]={};
        for(int i=0; i<n; i++) right[s[i]-'a']++;

        for(int i=0; i<n-1; i++){
            int mid=s[i]-'a';
            right[mid]--;
            if(i>0){
                for(int j=0; j<26; j++){
                    if(left[j] && right[j] && seen[mid][j]==0){
                        seen[mid][j]=1;
                        ans++;
                    }
                }
            }
            left[mid]++;
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();