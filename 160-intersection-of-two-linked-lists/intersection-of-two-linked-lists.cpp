/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int diff(ListNode *headA, ListNode *headB){
        int l1=0, l2=0;
        while(headA || headB){
            if(headA){
                l1++;
                headA=headA->next;
            }
            if(headB){
                l2++;
                headB=headB->next;
            }
        }
        return l1-l2;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int d=diff(headA, headB);
        if(d<0)
            while(d++ != 0)
                headB=headB->next;
        else
            while(d-- != 0)
                headA=headA->next;
        
        while(headA){
            if(headA==headB)
                return headA;
            headB=headB->next;
            headA=headA->next;
        }

        return NULL;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();