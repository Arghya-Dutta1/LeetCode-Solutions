class SmallestInfiniteSet {
public:
    set<int> st;
    int cur=1;    
    int popSmallest() {
        if(st.empty()) return cur++;
        int mn=*st.begin();
        st.erase(st.begin());
        return mn;
    }
    
    void addBack(int num) {
        if(num<cur) st.insert(num);
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