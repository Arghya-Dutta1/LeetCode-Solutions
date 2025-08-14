class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1] && num[i+2]==num[i+1]){
                string n=string(3, num[i]);
                ans=max(ans, n);
            }
        }
        return ans;
    }
};