class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i = 0, j = n - 1; 
        while (colors[i] == colors.back())
            ++i;
        while (colors[j] == colors.front())
            --j;
        return max(n - 1 - i, j);
    }
};