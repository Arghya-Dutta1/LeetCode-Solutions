class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size(); 
        vector<bool> visited(n, false);  
        int unplacedFruits = n; 
        for (int fruit : fruits)
            for (int i = 0; i < n; ++i)
                if (baskets[i] >= fruit && !visited[i]) {
                    visited[i] = true; 
                    --unplacedFruits;   
                    break;  
                }
        return unplacedFruits;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();