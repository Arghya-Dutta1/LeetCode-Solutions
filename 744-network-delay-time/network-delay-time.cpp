class Solution {
public:
    int dijkstra(vector<vector<pair<int, int>>>& g, int src){
        vector<int> d(g.size(), INT_MAX);
        d[src]=0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({d[src], src});

        while(!pq.empty()){
            auto [i,u]=pq.top();
            pq.pop();
            if(i>d[u])
                continue;
            for(auto& [v, w]:g[u])
                if(i+w<d[v]){
                    d[v]=i+w;
                    pq.push({d[v], v});
                }
        }

        int ans=ranges::max(d);
        return ans==INT_MAX?-1:ans;
    }

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int, int>>> g(n);
        for(auto& i:times)
            g[i[0]-1].push_back({i[1]-1, i[2]});
        
        return dijkstra(g, k-1);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();