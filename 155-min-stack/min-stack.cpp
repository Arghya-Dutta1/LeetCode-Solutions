class MinStack {
public:
    int mn;
    stack<int> st, stm;
    MinStack() {
    }
    
    void push(int val) {
        if(!st.empty())
            mn=min(mn, val);
        else
            mn=val;
        stm.push(mn);
        st.push(val);
    }
    
    void pop() {
        st.pop();
        stm.pop();
        if(!st.empty())
            mn=stm.top();
        else
            mn=INT_MAX;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return stm.top();
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */