/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> v;
        ListNode* dummy=head;
        while(dummy){
            v.push_back(dummy->val);
            dummy=dummy->next;
        }
        int n=v.size();
        swap(v[k-1], v[n-k]);
        dummy=head;
        int i=0;
        while(dummy){
            dummy->val=v[i++];
            dummy=dummy->next;
        }
        return head;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();