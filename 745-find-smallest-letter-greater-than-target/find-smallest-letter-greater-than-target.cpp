class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mn=26, idx=-1, it=-1;
        for(auto i:letters){
            it++;
            if(i>target)
                if(static_cast<int>(i-target)<mn){
                    mn=i-target;
                    idx=it;
                }
        }
        return idx==-1?letters[0]:letters[idx];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();