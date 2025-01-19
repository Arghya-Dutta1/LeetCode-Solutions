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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0) return head;

        ListNode* tail;
        int l=1;
        for(tail=head; tail->next; tail=tail->next) l++;
        tail->next=head;

        int t=l-k%l;
        for(int i=0;i<t;i++) tail=tail->next;
        ListNode* newHead=tail->next;
        tail->next=NULL;

        return newHead;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();