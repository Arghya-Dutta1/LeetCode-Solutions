class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int maxNum=*max_element(nums.begin(), nums.end());
        if(maxNum==0) return 0;

        int maxBit=static_cast<int>(log2(maxNum));
        int ans=0, mask=0;

        for(int i=maxBit; i>=0; i--){
            mask|=1<<i;
            unordered_set<int> prefixes;

            for(int num:nums)
                prefixes.insert(num&mask);

            int candidate=ans|(1<<i);
            for(int prefix:prefixes)
                if (prefixes.count(prefix^candidate)){
                    ans=candidate;
                    break;
                }
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