class MyCalendarTwo {
public:
    map<int, int> t;
    
    bool book(int start, int end) {
        ++t[start];
        --t[end];

        int active=0;

        for(auto i:t){
            active+=i.second;
            if(active>2){
                if(--t[start]==0)
                    t.erase(start);
                if(++t[end]==0)
                    t.erase(end);
                return false;
            }
        }
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
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */