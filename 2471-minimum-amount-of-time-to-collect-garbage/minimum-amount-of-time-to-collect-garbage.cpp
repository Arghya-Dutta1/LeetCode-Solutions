class Solution {
public:
    int garbageCollection(vector<string>& garb, vector<int>& tra) {
        int Pi=-1,Mi=-1,Gi=-1;
        int n=garb.size(), l=0;
        for(int i=n-1;i>=0;i--){
            if(Pi==-1 && garb[i].find('P')!=string::npos)
                Pi=i;
            if(Gi==-1 && garb[i].find('G')!=string::npos)
                Gi=i;
            if(Mi==-1 && garb[i].find('M')!=string::npos)
                Mi=i;
            l+=garb[i].size();

        }
        vector<int> pre(n,0);
        for(int i=1;i<n;i++)
            pre[i]=pre[i-1]+tra[i-1];
        int ans=0;
        if(Pi!=-1) ans+=pre[Pi];
        if(Gi!=-1) ans+=pre[Gi];
        if(Mi!=-1) ans+=pre[Mi];
        return ans+l;
    }
};