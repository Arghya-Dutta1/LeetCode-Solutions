class Solution {
public:
    vector<string> split(string str, char del){
        string temp = "";
        vector<string> ans;
        for(int i=0; i<(int)str.size(); i++){
            if(str[i] != del)
                temp += str[i];
            else{
                if(temp!="" && temp!=" ")
                    ans.push_back(temp);
                temp="";
            }
        }
        ans.push_back(temp);
        return ans;
    }

    string simplifyPath(string path) {
        for(int i=0;i<path.size()-1;i++)
            if(path[i]=='/' && path[i+1]=='/')
                path.erase(i+1, 1);
        int n=path.size();
        if(path.size()>1 && path[n-1]=='/')
            path.erase(n-1);
        
        if(path.size()==1) return path;

        vector<string> s=split(path, '/');
        stack<string> st;
        for(auto i:s){
            if(i=="."){
                continue;
            }
            else if(i==".."){
                if(!st.empty())
                    st.pop();
            }
            else
                st.push(i);
        }

        if(st.empty()) return "/";

        string ans="/"+st.top();
        st.pop();
        while(!st.empty()){
            ans="/"+st.top()+ans;
            st.pop();
        }

        for(int i=0;i<ans.size()-1;i++)
            if(ans[i]=='/' && ans[i+1]=='/')
                ans.erase(i+1, 1);

        if(ans.size()>1 &&ans[ans.size()-1]=='/') return ans.substr(0, ans.size()-1);
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();