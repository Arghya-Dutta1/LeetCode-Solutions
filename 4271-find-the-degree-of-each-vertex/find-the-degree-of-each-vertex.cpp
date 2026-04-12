class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(auto i:matrix){
            int c=0;
            for(auto j:i)
                if(j==1) c++;
            ans.push_back(c);
        }
        return ans;
    }
};