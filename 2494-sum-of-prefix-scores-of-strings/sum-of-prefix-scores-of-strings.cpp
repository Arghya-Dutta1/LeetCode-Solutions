struct Trie{
    int c=0;
    Trie* child[26];
};

class Solution {
public:
    Trie* getNode(){
        Trie* node = new Trie();
        for(int i=0;i<26;i++)
            node->child[i]=NULL;
        node->c=0;
        return node;
    }

    void insert(string s, Trie* root){
        Trie* crawl=root;
        for(auto c:s){
            int ind=c-'a';
            if(!crawl->child[ind])
                crawl->child[ind]=getNode();
            crawl->child[ind]->c+=1;
            crawl=crawl->child[ind];
        }
    }

    int getScore(string s, Trie* root){
        Trie* crawl=root;
        int sc=0;
        for(auto c:s){
            int ind=c-'a';
            sc+=crawl->child[ind]->c;
            crawl=crawl->child[ind];
        }
        return sc;
    }

    vector<int> sumPrefixScores(vector<string>& words) {
        int n=words.size();
        vector<int> ans(n);
        Trie* root=getNode();

        for(auto i:words)
            insert(i, root);
        for(int i=0;i<n;i++)
            ans[i]=getScore(words[i], root);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();