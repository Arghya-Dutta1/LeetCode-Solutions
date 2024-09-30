class CustomStack {
public:
    stack<int> st;
    vector<int> inc;
    int size;
    CustomStack(int maxSize) {
        size=maxSize;
    }
    
    void push(int x) {
        if(st.size()<size){
            st.push(x);
            inc.insert(inc.begin(), 0);
        }
    }
    
    int pop() {
        if(st.empty()) return -1;
        else{
            int n=st.top()+inc[0];
            inc.erase(inc.begin());
            st.pop();
            return n;
        }
    }
    
    void increment(int k, int val) {
        for(int i=0,j=st.size()-1;i<min(k, (int)st.size());i++,j--)
            inc[j]+=val;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */