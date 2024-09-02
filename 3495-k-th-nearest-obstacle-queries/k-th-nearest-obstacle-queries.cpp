class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int> ans;
        priority_queue<int> minHeap;
        for(auto i:queries){
            int s=abs(i[0])+abs(i[1]);
            minHeap.push(s);  
            if(minHeap.size() > k)
                minHeap.pop();
            if(minHeap.size() == k)
                ans.push_back(minHeap.top());
            else
                ans.push_back(-1);
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