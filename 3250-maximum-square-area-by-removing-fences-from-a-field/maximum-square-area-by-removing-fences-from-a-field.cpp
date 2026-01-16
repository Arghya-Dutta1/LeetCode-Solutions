class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences,
                           vector<int>& vFences) {
        int kMod = 1'000'000'007;

        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);

        ranges::sort(hFences);
        ranges::sort(vFences);

        unordered_set<int> hGaps = getGaps(hFences), vGaps = getGaps(vFences);
        int maxGap = -1;

        for (auto hGap : hGaps)
            if (vGaps.contains(hGap))
                maxGap = max(maxGap, hGap);

        return maxGap == -1 ? -1 : static_cast<long>(maxGap) * maxGap % kMod;
    }

    unordered_set<int> getGaps(const vector<int>& fences) {
        unordered_set<int> gaps;
        for (int i = 0; i < fences.size(); ++i)
            for (int j = 0; j < i; ++j)
                gaps.insert(fences[i] - fences[j]);
        return gaps;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();