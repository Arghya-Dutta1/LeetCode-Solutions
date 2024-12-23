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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(list1 && list2){
            if(list1 && list2 && list1->val<=list2->val){
                temp->next=new ListNode(list1->val);
                temp=temp->next;
                list1=list1->next;
            }
            if(list1 && list2 && list2->val<=list1->val){
                temp->next=new ListNode(list2->val);
                temp=temp->next;
                list2=list2->next;
            }
        }
        while(list1){
            temp->next=new ListNode(list1->val);
            temp=temp->next;
            list1=list1->next;
        }
        while(list2){
            temp->next=new ListNode(list2->val);
            temp=temp->next;
            list2=list2->next;
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