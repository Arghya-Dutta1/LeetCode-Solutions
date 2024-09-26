class MyCalendar {
public:
    vector<pair<int, int>> t;

    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto [s,e]:t)
            if(max(s,start)<min(e,end)) return false;
        t.push_back({start, end});
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */