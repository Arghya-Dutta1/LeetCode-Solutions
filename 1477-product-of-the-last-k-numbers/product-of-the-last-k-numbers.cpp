class ProductOfNumbers {
public:
    vector<int> nums;

    void add(int num) {
        nums.push_back(num);
    }
    
    int getProduct(int k) {
        int p=1, i=nums.size()-1;
        while(k--){
            p*=nums[i--];
        }
        return p;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */