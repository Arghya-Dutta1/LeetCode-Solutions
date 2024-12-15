class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extra) {
        double ans=0.0;
        int n=classes.size();
        priority_queue<pair<double, int>> pq;

        for(int i=0;i<n;i++){
            double cur=(double)classes[i][0]/classes[i][1];
            double now=(double)(classes[i][0]+1)/(classes[i][1]+1);
            double d=now-cur;
            pq.push({d, i});
        }

        while(extra--){
            auto cur=pq.top();
            pq.pop();

            // double d=cur.first;
            int idx=cur.second;

            classes[idx][0]++;
            classes[idx][1]++;

            double c=(double)classes[idx][0]/classes[idx][1];
            double now=(double)(classes[idx][0]+1)/(classes[idx][1]+1);
            double d=now-c;
            pq.push({d, idx});
        }

        for(int i=0;i<n;i++) ans+=(double)classes[i][0]/classes[i][1];

        return ans/n;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();