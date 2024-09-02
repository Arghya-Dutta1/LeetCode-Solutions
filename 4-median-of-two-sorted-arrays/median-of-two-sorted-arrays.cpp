class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();

        //Base Cases
        if(n1==0 && n2==0) return 0.0;
        if(n1==0 && n2!=0){
            int s=n2/2;
            if((n2&1)==0) return (nums2[s-1]+nums2[s])/2.0;
            else return nums2[s];
        }
        if(n2==0 && n1!=0){
            int s=n1/2;
            if((n1&1)==0) return (nums1[s-1]+nums1[s])/2.0;
            else return nums1[s];
        }

        //Merging both the arrays
        vector<int> nums;
        int i1=0, i2=0, c=0;
        while(i1<n1 && i2<n2){
            if(nums1[i1]<=nums2[i2]) nums.push_back(nums1[i1++]);
            else nums.push_back(nums2[i2++]);
            if(i1==n1) c=1;
            else if(i2==n2) c=2;
        }

        //Merging the Remaining bigger array
        if(c==1)
            for(;i2<n2;i2++)
                nums.push_back(nums2[i2]);
        else
            for(;i1<n1;i1++)
                nums.push_back(nums1[i1]);
        
        //Finding Median
        int s=nums.size()/2;
        if(nums.size()%2==0) return (nums[s-1]+nums[s])/2.0;
        else return nums[s];
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();