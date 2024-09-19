class Solution {
public:
    int sum(int a, int b){
        return a+b;
    }
    int sub(int a, int b){
        return a-b;
    }
    int mul(int a, int b){
        return a*b;
    }
    vector<int> diffWaysToCompute(string expression) {
        vector<int> ans;
        unordered_set<char> opr;
        opr.insert('+');
        opr.insert('-');
        opr.insert('*');
        for(int i=0;i<expression.length();i++){
            char op=expression[i];
            if(opr.find(op)!=opr.end()){
                vector<int> nums1=diffWaysToCompute(expression.substr(0, i));
                vector<int> nums2=diffWaysToCompute(expression.substr(i+1));
                for(int n1:nums1)
                    for(int n2:nums2)
                        switch(op){
                            case '+':
                                ans.push_back(sum(n1,n2));
                                break;
                            case '-':
                                ans.push_back(sub(n1,n2));
                                break;
                            case '*':
                                ans.push_back(mul(n1,n2));
                                break;
                        }
            }
        }
        if(ans.size()==0)
            ans.push_back(stoi(expression));
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();