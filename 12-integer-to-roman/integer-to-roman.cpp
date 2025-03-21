class Solution {
public:
    string ans="";
    void toR(int num){
        map<int, string, greater<int>> mp{{1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"},   {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

        for(auto [i,j]:mp){
            if(num==0) break;
            while(num>=i){
                num-=i;
                ans+=j;
            }
        }
    }
    string intToRoman(int num) {
        toR(num);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();