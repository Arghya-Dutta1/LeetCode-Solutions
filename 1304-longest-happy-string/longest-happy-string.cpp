class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans="";
        priority_queue<pair<int, char>> pq;
        if(a>0) pq.push({a, 'a'});
        if(b>0) pq.push({b, 'b'});
        if(c>0) pq.push({c, 'c'});

        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int f=it.first;
            char ch=it.second;
            int n=ans.size();
            if(n>=2 && ans[n-1]==ch && ans[n-2]==ch){
                if(pq.empty()) break;
                auto nxt=pq.top();
                pq.pop();
                ans+=nxt.second;
                if(--nxt.first>0) pq.push(nxt);
                pq.push(it);
            }
            else{
                ans+=ch;
                if(--f>0) pq.push({f, ch});
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