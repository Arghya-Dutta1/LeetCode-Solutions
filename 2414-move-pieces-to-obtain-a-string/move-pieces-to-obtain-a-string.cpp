class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.length(), si=0, tj=0;

        while(si<=n && tj<=n){
            while(si<n && start[si]=='_') si++;
            while(tj<n && target[tj]=='_') tj++;

            if(si==n || tj==n) return si==tj;
            if(start[si]!=target[tj]) return false;

            if(start[si]=='R' && si>tj) return false;
            if(start[si]=='L' && si<tj) return false;

            si++;
            tj++;
        }

        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();