class Solution {
public:
    vector<int> resultsArray(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> ans(n-k+1, -1);
        int c=1;
        for(int i=1;i<k;i++)
            if(arr[i]==arr[i-1]+1) c++;
            else c=1;

        if(c==k) ans[0]=arr[k-1];

        int i=1, j=k;
        while(j<n){
            if(arr[j]==arr[j-1]+1) c++;
            else c=1;
            if(c>=k)
                ans[i]=arr[j];
            i++;
            j++;
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