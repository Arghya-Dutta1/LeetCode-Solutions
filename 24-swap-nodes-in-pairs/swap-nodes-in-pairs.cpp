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
    ListNode* swapPairs(ListNode* head) {
        vector<int> l;
        ListNode* h=head;
        while(head){
            int i1=head->val;
            head=head->next;
            if(head){
                int i2=head->val;
                head=head->next;
                l.push_back(i2);
            }
            l.push_back(i1);
        }
        ListNode* t=h;
        int i=0;
        while(t){
            t->val=l[i++];
            t=t->next;
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