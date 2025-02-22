class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> ans;
        ranges::sort(products);
        int l=0, r=products.size()-1;
        for(int i=0;i<searchWord.size();i++){
            vector<string> w;
            char c=searchWord[i];
            while(l<=r && (products[l].size()<=i || products[l][i]!=c)) l++;
            while(l<=r && (products[r].size()<=i || products[r][i]!=c)) r--;
            int valid=r-l+1;
            for(int j=0;j<min(3,valid);j++)
                w.push_back(products[l+j]);
            ans.push_back(w);
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