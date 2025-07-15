class Solution {
public:
    bool f1(string word){
        for(auto i:word)
            if(!isalnum(i))
                return false;
        return true;
    }
    bool f2(string word){
        unordered_set<char> st={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int v=0, c=0;
        for(auto i:word)
            if(isalpha(i)){
                if(st.count(i))
                    v++;
                else
                    c++;
            }
        return v>=1 && c>=1;
    }
    bool isValid(string word) {
        return word.size()>=3 && f1(word) && f2(word);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();