class Solution {
public:
    int maximumLength(string s) {
        int n=s.length(), ans=-1, runningLen=0;
        char prevLetter='@';
        vector<vector<int>> counts(26, vector<int>(n+1));
        for(auto c:s)
            if(c==prevLetter) 
                ++counts[c-'a'][++runningLen];
            else {
                runningLen=1;
                ++counts[c-'a'][runningLen];
                prevLetter=c;
            }
        for (auto& c:counts)
            ans = max(ans, getMaxFreq(c, n));
        return ans;
    }
private:
    int getMaxFreq(const vector<int>& count, int maxFreq) {
        int times = 0;
        for (int freq = maxFreq; freq >= 1; --freq) {
            times += count[freq];
            if (times >= 3) return freq;
        }
        return -1;
    }
};

static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();
