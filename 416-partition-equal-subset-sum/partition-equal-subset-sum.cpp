class Solution {
public:
    bool canPartition(vector<int>& A) {
        int total=accumulate(begin(A), end(A), 0);
        if(total%2)
            return false;
        unordered_set<int> s,next;
        for(int n:A){
            next=s;
            for(int m:s)
                next.insert(m+n);
            next.insert(n);
            if(next.count(total/2))
                return true;
            swap(s, next);
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