class Solution {
 public:
  string reverseParentheses(string s) {
    string ans;
    stack<int> stack;
    unordered_map<int, int> pair;

    for (int i = 0; i < s.length(); ++i)
      if (s[i] == '(') {
        stack.push(i);
      } else if (s[i] == ')') {
        const int j = stack.top();
        stack.pop();
        pair[i] = j;
        pair[j] = i;
      }

    for (int i = 0, d = 1; i < s.length(); i += d)
      if (s[i] == '(' || s[i] == ')') {
        i = pair[i];
        d = -d;
      } else {
        ans += s[i];
      }

    return ans;
  }
};

static const int __  = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();