// Pushed: 2026-09-15 10:25:06 UTC
// Difficulty: Medium
// Runtime: 142 ms
// Memory: 47.1 MB

class LRUCache {
    public:
    struct node{
        int key,val;
        struct node *next;
        struct node *prev;
    }*head=NULL,*tail=NULL;
    int c;

    LRUCache(int cap) {
        c=cap;
    }
    
    int get(int key) {
        struct node *ptr=head;
        while(ptr!= NULL){
            if(ptr->key==key)
                break;
            ptr=ptr->next;
        }
        if(ptr==NULL)
            return -1;

        if(ptr==head)
            return head->val;
        
        else if(ptr==tail){
            tail=tail->prev;
            ptr->prev->next=NULL; 
        }
        else{
        ptr->prev->next=ptr->next;
        ptr->next->prev=ptr->prev;
        }

        ptr->next=head;
        head->prev=ptr;
        head=ptr;

        return head->val;

    }
    
    void put(int key, int val) {
        if(get(key)!=-1){
            head->val=val;
            return;
        }
        --c;
        struct node *ptr=(struct node *)malloc(sizeof(struct node));
        ptr->key=key;
        ptr->val=val;
        ptr->next=ptr->prev=NULL;
        
        if(c==-1){
            ++c;
            struct node *tem=tail;
             if(head==tail){
                head=NULL;
                tail=NULL;
            }
            else{
            tail=tail->prev;
            tail->next=NULL;
            }
            free(tem);
        }
        if(head==NULL){
            head=tail=ptr;
            return;
        }
        if(head==tail)
            tail->prev=ptr;
        
        ptr->next=head;
        head->prev=ptr;
        head=ptr;
        
        

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */