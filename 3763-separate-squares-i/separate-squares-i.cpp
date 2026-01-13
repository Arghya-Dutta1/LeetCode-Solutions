class Solution {
public:
    double solve(vector<vector<int>>& squares, double m){
        double area=0.0;
        for(auto& i:squares){
            if(m<=i[1])
                area+=0;
            else if(m>=i[1]+i[2])
                area+=(double)i[2]*i[2];
            else
                area+=(double)(m-i[1])*i[2];
        }
        return area;
    }

    double separateSquares(vector<vector<int>>& squares) {
        int n=squares.size();
        double total=0.0, l=numeric_limits<double>::max(), h=-numeric_limits<double>::max();

        for(auto& i:squares){
            total+=(double) i[2]*i[2];
            l=min((double)i[1], l);
            h=max(h, (double)(i[1]+i[2]));
        }

        double tar=total/2.0;
        for(int i=0;i<100;i++){
            double m=(l+h)/2.0;
            double area=solve(squares, m);
            cout<<area<<endl;
            if(area<tar)
                l=m;
            else
                h=m;
        }

        return h;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();