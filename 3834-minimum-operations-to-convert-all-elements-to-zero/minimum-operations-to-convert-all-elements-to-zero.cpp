class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        stack<int> stack;
        stack.push(0);

        for (const int num : nums) {
            while (!stack.empty() && stack.top() > num)
                stack.pop();
            if (stack.empty() || stack.top() < num) {
                ++ans;
                stack.push(num);
            }
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