class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        if(chalk.size()==1) return 0;
        int i=0;
        int s=0;
        for(int j=0;j<chalk.size();j++){
            s+=chalk[j];
            if(s>k)
                return j;
        }
        k%=s;
        while(1){
            if(k<chalk[i])
                break;
            k-=chalk[i++];
            i%=chalk.size();
        }
        return i;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();