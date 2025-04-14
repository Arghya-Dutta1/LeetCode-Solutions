/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* dfs(Node* node, unordered_map<Node*, Node*>& cloneMap) {
        if (cloneMap.find(node) != cloneMap.end())
            return cloneMap[node];
        
        Node* cloneNode = new Node(node->val);
        cloneMap[node] = cloneNode;

        for (Node* neighbor : node->neighbors)
            cloneNode->neighbors.push_back(dfs(neighbor, cloneMap));
        
        return cloneNode;
    }

    Node* cloneGraph(Node* node) {
        if (!node) return NULL;
        unordered_map<Node*, Node*> cloneMap;
        return dfs(node, cloneMap);
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();