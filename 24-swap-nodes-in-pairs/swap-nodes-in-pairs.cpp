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
        int length=0;
        ListNode* temp=head;
        while(temp){
            length++;
            temp=temp->next;
        }
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;

        for (int i = 0; i < length / 2; ++i) {
            ListNode* next = curr->next;
            curr->next = next->next;
            next->next = prev->next;
            prev->next = next;
            prev = curr;
            curr = curr->next;
        }
        return dummy.next;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();