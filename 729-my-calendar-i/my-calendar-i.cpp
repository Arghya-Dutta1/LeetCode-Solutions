class MyCalendar {
public:
    map<int, int> t;
    
    bool book(int start, int end) {
        auto low=t.lower_bound(end);
        if(low==t.begin() || (--low)->second<=start){
            t[start]=end;
            return true;
        }
        return false;
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