class Solution {
public:
    string convertDateToBinary(string date) {
        auto bin = [&](int x) {
            string r;
            for (; x; x >>= 1) r.push_back((x & 1) + '0');
            ranges::reverse(r);
            return r;
        };
        return bin(stoi(date.substr(0, 4))) + "-" + bin(stoi(date.substr(5, 2))) + "-" + bin(stoi(date.substr(8, 2)));
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();