class Solution {
public:
    int countDays(int tot, vector<vector<int>>& sch) {
        int res = 0;
        int lst = 0;

        ranges::sort(sch);

        for (const vector<int>& evt : sch) {
            int st = evt[0];
            int en = evt[1];
            if (st > lst)
                res += st - lst - 1;
            lst = max(lst, en);
        }

        return res + max(0, tot - lst);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();