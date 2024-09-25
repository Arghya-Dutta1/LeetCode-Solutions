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

    ListNode* mid(ListNode* head){
        ListNode *fp=head, *sp=head;
        while(fp && fp->next){
            sp=sp->next;
            fp=fp->next->next;
        }
        return sp;
    }

    ListNode* rev(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            ListNode* nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        ListNode* m=mid(head);
        ListNode* temp2=rev(m);
        while(temp && temp2){
            if(temp->val != temp2->val)
                return false;
            temp=temp->next;
            temp2=temp2->next;
        }
        return true;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();