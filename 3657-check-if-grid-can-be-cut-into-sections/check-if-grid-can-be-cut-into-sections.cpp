#define fi first
#define se second
class Solution {
public:
    int count(vector<pair<int, int>>& v){
        int c=0,p=0;
        for(auto& i:v){
            if(i.fi<p) p=max(p, i.se);
            else p=i.se,c++;
        }
        return c;
    }

    bool checkValidCuts(int n, vector<vector<int>>& rectangles) {
        int s=rectangles.size();
        vector<pair<int, int>> x,y;
        for(auto& i:rectangles){
            x.push_back({i[0], i[2]});
            y.push_back({i[1], i[3]});
        }
        ranges::sort(x);
        ranges::sort(y);
        return count(x)>=3||count(y)>=3;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();