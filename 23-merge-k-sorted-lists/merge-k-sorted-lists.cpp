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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode dummy, *tail=&dummy;
        auto cmp=[](auto a, auto b){
            return a->val > b->val;
        };

        priority_queue<ListNode*,vector<ListNode*>,decltype(cmp)> q(cmp);
        for(auto i:lists)
            if(i) q.push(i); 
        
        while(q.size()){
            auto node=q.top();
            q.pop();
            if(node->next) q.push(node->next);
            tail->next=node;
            tail=node;
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