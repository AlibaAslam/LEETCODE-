class MyLinkedList {
public:
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = nullptr;
        }
    };

    Node* head;
    int size;

    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;

        Node* temp = head;
        while (index--) {
            temp = temp->next;
        }

        return temp->data;
    }

    void addAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        head = n;
        size++;
    }

    void addAtTail(int val) {
        if (head == nullptr) {
            addAtHead(val);
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;

        temp->next = new Node(val);
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size)
            return;

        if (index == 0) {
            addAtHead(val);
            return;
        }

        if (index == size) {
            addAtTail(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* n = new Node(val);
        n->next = temp->next;
        temp->next = n;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size)
            return;

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            size--;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
        size--;
    }
};