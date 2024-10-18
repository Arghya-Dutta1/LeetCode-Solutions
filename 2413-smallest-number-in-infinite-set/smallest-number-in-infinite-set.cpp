class SmallestInfiniteSet {
public:
    unordered_set<int> st;
    int popSmallest() {
        int cur=1;
        while(st.count(cur)) cur++;
        st.insert(cur);
        return cur;
    }
    
    void addBack(int num) {
        st.erase(num);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */