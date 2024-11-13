class Solution {
public:
    void heapify(vector<int>& n, int s, int i){
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if(l<s && n[l]>n[largest]) largest=l;
        if(r<s && n[r]>n[largest]) largest=r;
        if(largest!=i){
            swap(n[i], n[largest]);
            heapify(n, s, largest);
        }
    }

    void heapSort(vector<int>& n, int s){
        for(int i=s/2-1;i>=0;i--)
            heapify(n, s, i);
        
        for(int i=s-1;i>=0;i--){
            swap(n[0], n[i]);
            heapify(n, i, 0);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums, nums.size());
        return nums;
    }
};