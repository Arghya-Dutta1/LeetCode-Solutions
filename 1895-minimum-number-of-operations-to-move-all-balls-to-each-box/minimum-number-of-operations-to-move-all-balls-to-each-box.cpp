class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int moves=0, ones=0;
        for(int i=1; boxes[i]; i++){
            if (boxes[i]=='1'){
                moves+=i;
                ones++;
            }
        }
        int passed=0;
        for(int i=0; boxes[i]; i++){
            ans.push_back(moves);
            if(boxes[i]=='1'){
                if(i!=0)
                    ones--;
                passed++;
            }
            moves=moves-ones+passed;
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