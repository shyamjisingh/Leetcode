class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};


class MyLinkedList {
    Node* head;
    Node* tail;
    int count = 0;
public:
    MyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }
    
    int get(int index) {
        if(index < 0 || index >= count) return -1;
        Node* temp = head;
        for(int i=0; i<index; i++){
            temp = temp->next;
        }
        return temp->data;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        count++;
        if(head == nullptr){
            tail = head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        count++;
        if(tail == nullptr){
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index < 0) index = 0;
        if(index == 0){
            addAtHead(val);
            return;
        }
        if(index == count){
            addAtTail(val);
            return;
        }
        if(index > count){
            return;
        }

        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        count++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= count) return;
        if(index == 0){
            Node* temp = head;
            head = head->next;
            delete temp;
            count--;
            if(count==0){
                tail=nullptr;
            }
            return;
        }

        Node* temp = head;
        for(int i=0; i<index-1; i++){
            temp = temp->next;
        }
        Node* toDelete = temp->next;
        temp->next = toDelete->next;
        if(toDelete == tail){
            tail = temp;
        }
        delete toDelete;
        count--;
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