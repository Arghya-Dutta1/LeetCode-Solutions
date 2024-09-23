class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0, r=arr.size();
        while(l<r){
            int m=(l+r)/2;
            if(arr[m]<arr[m+1])
                l=m+1;
            else
                r=m;
        }
        return l;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();