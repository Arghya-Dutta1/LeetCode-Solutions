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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<ListNode*> st1;
        while(l1){
            st1.push(l1);
            l1=l1->next;
        }

        stack<ListNode*> st2;
        while(l2){
            st2.push(l2);
            l2=l2->next;
        }

        int s=0;
        ListNode* head=nullptr;
        while(s || !st1.empty() || !st2.empty()){
            if(!st1.empty()){
                s+=st1.top()->val;
                st1.pop();
            }
            if(!st2.empty()){
                s+=st2.top()->val;
                st2.pop();
            }
            ListNode* temp=new ListNode(s%10);
            s/=10;
            temp->next=head;
            head=temp;
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