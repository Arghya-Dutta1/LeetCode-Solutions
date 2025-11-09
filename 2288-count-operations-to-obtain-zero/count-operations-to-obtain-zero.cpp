class Solution {
public:
    int countOperations(int num1, int num2) {
        int ans = 0;
        while (num1 && num2) {
            if (num1 < num2)
                swap(num1, num2);
            ans += num1 / num2;
            num1 %= num2;
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();