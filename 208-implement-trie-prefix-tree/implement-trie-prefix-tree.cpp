class Trie {
private:
    vector<Trie*> children;
    bool isEnd;

    Trie* searchPrefix(string pre){
        Trie* node=this;
        for(auto i:pre){
            int idx=i-'a';
            if(!node->children[idx]) return NULL;
            node=node->children[idx];
        }
        return node;
    }
public:
    Trie(): children(26, NULL), isEnd(false) {}
    
    void insert(string word) {
        Trie* node=this;
        for(auto i:word){
            int idx=i-'a';
            if(!node->children[idx]) node->children[idx]=new Trie();
            node=node->children[idx];
        }
        node->isEnd=true;
    }
    
    bool search(string word) {
        Trie* node=searchPrefix(word);
        return node && node->isEnd;
    }
    
    bool startsWith(string prefix) {
        Trie* node=searchPrefix(prefix);
        return node;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */