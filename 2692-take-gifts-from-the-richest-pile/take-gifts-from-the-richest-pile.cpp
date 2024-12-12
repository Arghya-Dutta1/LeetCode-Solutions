class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int> pq;
        for(auto i:gifts) pq.push(i);
        while(k--){
            int t=floor(sqrt(pq.top()));
            pq.pop();
            pq.push(t);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
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