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

    ListNode* getK(ListNode* temp, int k){
        k-=1;
        while(temp && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* plast=nullptr;
        while(temp){
            ListNode* kth=getK(temp,k);
            if(kth==nullptr){
                if(plast){
                    plast->next=temp;
                    break;
                }
            }
            ListNode* nxt=kth->next;
            kth->next=nullptr;
            kth=rev(temp);

            if(temp==head)
                head=kth;
            else
                plast->next=kth;
            plast=temp;
            temp=nxt;
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