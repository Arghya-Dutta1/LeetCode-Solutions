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
    int pairSum(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=0;
        ListNode* dummy=head;
        while(dummy){
            n++;
            dummy=dummy->next;
        }
        vector<int> ans(n/2, 0);
        dummy=head;
        int i=0;
        while(dummy){
            if(i>=n/2)
                ans[n-1-i++]+=dummy->val;
            else
                ans[i++]+=dummy->val;
            dummy=dummy->next;
        }
        return ranges::max(ans);
    }
};