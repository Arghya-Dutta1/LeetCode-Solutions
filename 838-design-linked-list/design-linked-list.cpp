class MyLinkedList {
    struct Node{
        int val;
        Node* next;;
        Node(int d){
            val=d;
            next=NULL;
        }
    };
public:
    int len=0;
    Node dummy=Node(0);
    
    int get(int index) {
        if(index<0 || index>=len) return -1;
        Node* curr=dummy.next;
        for(int i=0;i<index;i++)
            curr=curr->next;
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* head=dummy.next;
        Node* node=new Node(val);
        node->next=head;
        dummy.next=node;
        len++;
    }
    
    void addAtTail(int val) {
        Node* curr=&dummy;
        while(curr->next)
            curr=curr->next;
        curr->next=new Node(val);
        len++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>len) return;
        Node* curr=&dummy;
        for(int i=0;i<index;i++) curr=curr->next;
        Node* nxt=curr->next;
        Node* node=new Node(val);
        curr->next=node;
        node->next=nxt;
        len++;
    }
    
    void deleteAtIndex(int index) {
        if(index<0 || index>=len) return;
        Node* curr=&dummy;
        for(int i=0;i<index;i++) curr=curr->next;
        Node* nxt=curr->next;
        curr->next=nxt->next;
        len--;
        delete nxt;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */