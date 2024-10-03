class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        map<int, int> mp;
	    mp[0]=1;
	
	    int csum=0, ans=0;
        for(int i=0;i<a.size();i++){
    	    csum+=a[i];
    	    if(mp.count(csum-k))
    		    ans+=mp[csum-k];
    	    mp[csum]++;    		
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