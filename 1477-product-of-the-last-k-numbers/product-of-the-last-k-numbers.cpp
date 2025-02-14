class ProductOfNumbers {
public:
    ProductOfNumbers():nums{1}{}
    vector<int> nums;

    void add(int num) {
        if(num==0)
            nums={1};
        else
            nums.push_back(nums.back()*num);
    }
    
    int getProduct(int k) {
        return k>=nums.size()?0:nums.back()/nums[nums.size()-k-1];
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