class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int x=-1,y=-1;
        int len=0;

        // odd

        for(int i=0;i<n;i++){
            int j=i-1;
            int k=i+1;
            while(j>=0 and k<n and s[j]==s[k]){
                j--;
                k++;
            }
            int l=k-j-1;
            if(l>len){
                len=l;
                x=j+1;
                y=k-1;
            }
        }

    //even

        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]){
                int j=i-1;
                int k=i+2;
                  while(j>=0 and k<n and s[j]==s[k]){
                j--;
                k++;
            }
            int l=k-j-1;
            if(l>len){
                len=l;
                x=j+1;
                y=k-1;
            }
            }
        }

        string t="";
        for(int i=x;i<=y;i++)t+=s[i];

        return t;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();