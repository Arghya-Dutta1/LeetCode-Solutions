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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st(nums.begin(), nums.end());
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* curr=dummy;
        while(curr->next){
            if(st.find(curr->next->val)!=st.end()){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            else curr=curr->next;
        }
        return dummy->next;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();