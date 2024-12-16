class StockSpanner {
public:
    stack<pair<int, int>> st;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int span=1;
        while(!st.empty() && st.top().first<=price){
            span+=st.top().second;
            st.pop();
        }
        st.push({price, span});
        return span;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */