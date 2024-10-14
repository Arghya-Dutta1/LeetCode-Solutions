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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* oddTail=head;
        ListNode* evenHead=head->next;
        ListNode* evenTail=evenHead;
        while(evenTail && evenTail->next){
            oddTail->next=evenTail->next;
            oddTail=oddTail->next;
            evenTail->next=oddTail->next;
            evenTail=evenTail->next;
        }
        oddTail->next=evenHead;
        return head;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();