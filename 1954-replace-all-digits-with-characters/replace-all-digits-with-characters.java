class Solution {
    public String replaceDigits(String s) {
        StringBuilder ans = new StringBuilder();
        ans.append(s.charAt(0));
        for (int i = 1; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i))) {
                char ch = s.charAt(i - 1);
                int n = s.charAt(i) - '0';
                ch += n;
                ans.append(ch);
            } else {
                ans.append(s.charAt(i));
            }
        }
        return ans.toString();
    }
}