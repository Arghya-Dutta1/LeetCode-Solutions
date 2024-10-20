class Solution { 
    public:     
    int gPD(int x) { 
        if(x<=1) return 0;  
        for(int i=2; i*i<=x; i++){ 
            if(x%i==0){ 
                if(i<x) return i;          
                if (x/i<x) return x/i; 
            } 
        } 
        return 0;  
    } 
    int minOperations(vector<int>& nums) { 
        int n=nums.size(); 
        int ops=0;         
        for (int i=n-2; i>=0; i--){ 
            if (nums[i]<=nums[i+1]) continue; 
            int cur=nums[i];   
            int nxt=nums[i+1];  
            int lops=0; 
            int divisor = gPD(cur); 
            if (divisor <= 1) return -1; 
            lops++; 
            nums[i] = divisor; 
            if(nums[i]>nxt) 
            return -1; 
            ops+=lops; 
        }
        return ops;   
    } 
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();