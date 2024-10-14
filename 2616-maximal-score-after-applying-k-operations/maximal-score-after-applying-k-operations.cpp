class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums) pq.push(i);
        long long score=0;
        while(k--){
            int v=pq.top();
            pq.pop();
            score+=v;
            cout<<v<<endl;
            v=ceil(v/3.0);
            pq.push(v);
        }
        return score;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();