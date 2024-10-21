class Solution {
public:
    long sum(vector<int>& a, int k){
	    double s=0.0;
	    for(auto i:a)
		    s+=ceil(i/(k*1.0));
	    return (long)s;
    }

    int minEatingSpeed(vector<int>& a, int h) {
        long mx=0;
	    for(auto i:a)
		    if(i>mx)
			    mx=i;
	    long l=1, r=mx, v=mx;
	    while(l<=r){
		    long mid=l+(r-l)/2;
		    long v1=sum(a,mid);
		    if(v1<=h){
			    v=min(v,mid);
			    r=mid-1;
		    }
		    else{
			    l=mid+1;
		    }			
	    }
        return v;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();