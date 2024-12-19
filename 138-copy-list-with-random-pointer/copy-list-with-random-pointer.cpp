/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;

        //Insert node in between
        while(temp){
            Node* node=new Node(temp->val);
            node->next=temp->next;
            temp->next=node;
            temp=temp->next->next;
        }

        temp=head;

        //Connect random pointers
        while(temp){
            Node* node=temp->next;
            if(temp->random)
                node->random=temp->random->next;
            else
                node->random=NULL;

            temp=temp->next->next;
        }

        temp=head;

        //create a dummy list
        Node* nh=new Node(-1);
        Node* t=nh;

        //create deep copy 
        while(temp){
            t->next=temp->next;
            t=t->next;

            //changing original list back to normal
            temp->next=temp->next->next;
            temp=temp->next;
        }

        return nh->next;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();