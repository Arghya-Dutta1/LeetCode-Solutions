class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int target) {
        int ans=0;
        priority_queue<int, vector<int>, greater<>> epq;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> opq;

        for(int i=0;i<times.size();i++)
            times[i].push_back(i);
        
        ranges::sort(times);

        for(auto t:times){
            int a=t[0];
            int l=t[1];
            int i=t[2];

            while(!opq.empty() && opq.top().first<=a){
                epq.push(opq.top().second);
                opq.pop();
            }

            if(i==target) return epq.empty()?ans:epq.top();
            if(epq.empty()) opq.push({l, ans++});
            else{
                opq.push({l, epq.top()});
                epq.pop();
            }
        }
        return -1;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();