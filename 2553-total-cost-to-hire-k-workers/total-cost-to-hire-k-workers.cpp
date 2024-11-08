class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans=0;
        int i=0, j=costs.size()-1;
        priority_queue<int, vector<int>, greater<int>> pql, pqr;
        for(int it=0;it<k;it++){
            while(pql.size()<candidates && i<=j) pql.push(costs[i++]);
            while(pqr.size()<candidates && i<=j) pqr.push(costs[j--]);
            if(pql.empty()){
                ans+=pqr.top();
                pqr.pop();
            }
            else if(pqr.empty()){
                ans+=pql.top();
                pql.pop();
            }
            else if(pql.top()<=pqr.top()){
                ans+=pql.top();
                pql.pop();
            }
            else{
                ans+=pqr.top();
                pqr.pop();
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