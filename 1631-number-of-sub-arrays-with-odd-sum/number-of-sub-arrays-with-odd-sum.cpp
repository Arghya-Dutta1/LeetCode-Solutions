class Solution {
public:
    const int M=1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefix(n, 0);
        prefix[0]=arr[0];

        for(int i=1; i<n; i++)
            prefix[i]=prefix[i-1]+arr[i];

        int count=0, odd=0, even=1;
        for(int i=0; i<n; i++)
            if(prefix[i]%2==0){
                count=(count+odd)%M;
                even++;
            }
            else{ 
                count=(count+even)%M;
                odd++;
            }

        return count;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();