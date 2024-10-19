class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0, r=arr.size()-k;
        while(l<r){
            int m=(l+r)/2;
            if(x-arr[m]<=arr[m+k]-x)
                r=m;
            else
                l=m+1;
        }
        return {arr.begin()+l, arr.begin()+l+k};
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();