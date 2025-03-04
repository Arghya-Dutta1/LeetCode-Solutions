class Solution {
public:
    unordered_set<int> st;

    void ter(int n){
        if(n==0) return;
        int x=n%3;
        n/=3;
        st.insert(x);
        ter(n);
    }

    bool checkPowersOfThree(int n) {
        ter(n);
        return !st.count(2);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();