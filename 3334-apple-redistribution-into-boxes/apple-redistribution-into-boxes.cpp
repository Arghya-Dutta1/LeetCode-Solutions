class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        ranges::sort(capacity);
        int m=capacity.size(), s=0, sum=0, ans=0;
        for(auto i:apple) sum+=i;
        for(int i=m-1;i>=0;i--){
            ans++;
            s+=capacity[i];
            if(s>=sum) break;
        }
        return ans;
    }
};