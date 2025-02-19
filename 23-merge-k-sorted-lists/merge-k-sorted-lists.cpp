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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> ans;
        for(auto i:lists)
            while(i){
                ans.push_back(i->val);
                i=i->next;
            }
        ranges::sort(ans);
        ListNode* dummy=new ListNode(-1);
        ListNode* head=dummy;
        for(auto i:ans){
            dummy->next=new ListNode(i);
            dummy=dummy->next;
        }
        return head->next;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();