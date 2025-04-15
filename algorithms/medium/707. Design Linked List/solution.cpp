struct Node{
    int val;
    Node *next;

    Node(int data = 0) :val(data), next(nullptr){}

    Node(int data, Node *tempNext):val(data), next(tempNext){}
};

class MyLinkedList {
    Node *head;
public:
    MyLinkedList():head(nullptr) {
        
    }
    
    int len(){
        Node* itr = head;
        int count = 0;
        while(itr){
            itr = itr->next;
            count++;
        }
        return count;
    }

    int get(int index) {
        int i = 0;
        Node* itr = head;
        while(itr){
            if(i == index){
                return itr->val;
            }
            itr = itr->next;
            i++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* new_node = new Node(val);
        if(head == nullptr){
            head = new_node;
        }else{
            new_node->next = head;
            head = new_node;
        }
    }
    
    void addAtTail(int val) {
        if(!head){
            addAtHead(val);
            return;
        }
        Node* itr = head;
        while(itr->next){
            itr = itr->next;
        }
        Node* new_node = new Node(val);
        itr->next = new_node;
    }
    
    void addAtIndex(int index, int val) {
        int l = len();
        if(index > l){
            return;
        }
        addAtHead(0);
        if(index == 0){
            head->val = val;
        }
        int i = 0;
        Node* itr = head;
        while(i<index){
            itr->val = itr->next->val;
            itr = itr->next;
            i++;
        }
        itr->val = val;
    }
    
    void deleteAtIndex(int index) {
        if(!head){
            return;
        }
        if(index == 0){
            head = head->next;
            return;
        }
        Node* itr = head;
        int i = 0;
        while(itr->next){
            if(i == index-1){
                itr->next = itr->next->next;
                return;
            }
            itr = itr->next;
            i++;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
