class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        int n=p.size();
        stack<int> st;
        vector<int> ind(n);
        for(int i=0;i<n;i++) ind[i]=i;
        auto cmp = [&](int i1, int i2){
            return p[i1]<=p[i2];
        };
        sort(ind.begin(), ind.end(), cmp);
        for(auto id:ind){
            if(d[id]=='R') st.push(id);
            else
                while(!st.empty() && h[id]>0){
                    if(h[id]>h[st.top()]){
                        h[id]--;
                        h[st.top()]=0;
                        st.pop();
                    }
                    else if(h[id]<h[st.top()]){
                        h[id]=0;
                        h[st.top()]--;
                    }
                    else{
                        h[id]=0;
                        h[st.top()]=0;
                        st.pop();
                    }
                }
        }
        vector<int> ans;
        for(auto i:h)
            if(i!=0) ans.push_back(i);
        return ans;;
    }
};