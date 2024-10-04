class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        ranges::sort(skill);
        long long ans=0;
        int s=skill[0]+skill[skill.size()-1];
        for(int i=0;i<skill.size()/2;i++){
            if(skill[i]+skill[skill.size()-i-1]!=s) return -1;
            ans+=(skill[i]*skill[skill.size()-i-1]);
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