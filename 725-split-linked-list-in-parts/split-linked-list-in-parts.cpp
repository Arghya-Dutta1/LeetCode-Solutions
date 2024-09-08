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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* dummy=head, *d2;
        int len=0;
        while(dummy){
            len++;
            dummy=dummy->next;
        }
        vector<ListNode*> ans(k);
        int n=len/k, m=len%k, c=0, i=0;
        dummy=head;
        d2=head;
        if(n==0){
            while(dummy){
                ans[i++]=d2;
                d2=dummy->next;
                dummy->next=NULL;
                dummy=d2;
            }
            return ans;
        }
        while(dummy){
            c++;
            if(c==n){
                if(m){
                    dummy=dummy->next;
                    m--;
                }
                ans[i++]=d2;
                d2=dummy->next;
                dummy->next=NULL;
                c=0;
                dummy=d2;
                continue;
            }
            dummy=dummy->next;
        }
        return ans;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();