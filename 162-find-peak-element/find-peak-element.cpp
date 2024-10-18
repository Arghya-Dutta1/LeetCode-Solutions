class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l=0, r=a.size()-1;
	    while(l<r){
		    int mid=l+(r-l)/2;
		    if(a[mid]>a[mid+1]){
			    r=mid;
		    }
		    else
                l=mid+1;
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