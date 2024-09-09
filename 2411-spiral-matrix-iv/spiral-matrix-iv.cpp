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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m, vector<int>(n, -1));
        int di=0, i=0, j=0, rs=m-1, cs=n, c=0;
        int dr[] = { 0, 1, 0, -1 };
        int dc[] = { 1, 0, -1, 0 };
        while(head){
            if(i>=0 && i<m && j>=0 && j<n){
                ans[i][j]=head->val;
                head=head->next;
                c++;
            }
            if(c==rs && abs(dr[di])){
                rs--;
                di=(di+1)%4;
                c=0;
                cout<<i<<" "<<j<<endl;
            }
            if(c==cs && abs(dc[di])){
                cs--;
                di=(di+1)%4;
                c=0;
                cout<<i<<" "<<j<<endl;
            }
            i+=dr[di];
            j+=dc[di];
        }
        return ans;
    }
};
