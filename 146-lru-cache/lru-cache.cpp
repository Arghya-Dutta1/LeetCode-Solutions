class LRUCache {
public:
    class node{
    public:
        int key;
        int val;
        node* next;
        node* prev;
        node(int k, int v){
            key=k;
            val=v;
        }
    };

    node* head=new node(-1, -1);
    node* tail=new node(-1, -1);

    int cap;
    unordered_map<int, node*> mp;

    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }

    void add(node* newnode) {
        node* temp=head->next;
        newnode->next=temp;
        newnode->prev=head;
        head->next=newnode;
        temp->prev=newnode;
    }

    void del(node* delnode) {
        node * delprev = delnode -> prev;
        node * delnext = delnode -> next;
        delprev -> next = delnext;
        delnext -> prev = delprev;
    }
    
    int get(int key) {
        if (mp.find(key) != mp.end()) {
            node* resnode = mp[key];
            int res = resnode -> val;
            mp.erase(key);
            del(resnode);
            add(resnode);
            mp[key] = head -> next;
            return res;
        }

        return -1;
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            node* existingnode = mp[key];
            mp.erase(key);
            del(existingnode);
        }
        if (mp.size() == cap) {
            mp.erase(tail -> prev -> key);
            del(tail -> prev);
        }

        add(new node(key, value));
        mp[key] = head -> next;
    }
};

static const int __ = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}();

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */