class Solution {
public:
    vector<int> parent;
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        parent.resize(1010);
        for(int i=0;i<parent.size();i++) parent[i]=i;
        for(auto& e:edges){
            int nodeA = e[0], nodeB = e[1];
            if(find(nodeA) == find(nodeB)) return e; 
            parent[find(nodeA)] = find(nodeB);
        }
        return {};
    }

    int find(int node){
        if(parent[node]!=node){ 
            parent[node]=find(parent[node]); 
        }
        return parent[node];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();