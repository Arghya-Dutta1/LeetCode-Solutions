class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int ans=0;
        while(l<r){
            int area=min(height[l], height[r])*(r-l);
            ans=max(ans, area);
            if(height[l]<height[r])
                l++;
            else
                r--;
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