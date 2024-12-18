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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int s=0, i=0;
        while(temp){
            temp=temp->next;
            s++;
        }
        cout<<s<<endl;
        if(s>1){
        s=s-n-1;
        if(s<0)
            return head->next;
        cout<<s<<endl;
        ListNode* temp2=head;
        while(temp2){
            if(i==s && temp2->next->next!=nullptr)
                temp2->next=temp2->next->next;
            else if(i==s && temp2->next->next==nullptr)
                temp2->next=nullptr;
            temp2=temp2->next;
            i++;
        }
        }
        else
            head=nullptr;
        return head;

    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();