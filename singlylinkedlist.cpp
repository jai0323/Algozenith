#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() {
        head = nullptr;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        if (head == nullptr) {
            insertAtBeginning(val);
            return;
        }

        Node* node = new Node(val);
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = node;
    }

    void insertAtPosition(int val, int pos) {
        if (pos == 0) {
            insertAtBeginning(val);
            return;
        }

        Node* temp = head;
        for (int i = 0; temp != nullptr && i < pos - 1; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position out of bounds\n";
            return;
        }

        Node* node = new Node(val);
        node->next = temp->next;
        temp->next = node;
    }

    void deleteFromBeginning() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteFromEnd() {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }

    void deleteFromPosition(int pos) {
        if (head == nullptr) {
            cout << "List is empty\n";
            return;
        }
        if (pos == 0) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        for (int i = 0; temp->next != nullptr && i < pos - 1; i++) {
            temp = temp->next;
        }

        if (temp->next == nullptr) {
            cout << "Position out of bounds\n";
            return;
        }

        Node* nodeToDelete = temp->next;
        temp->next = nodeToDelete->next;
        delete nodeToDelete;
    }

    int search(int val) {
        Node* temp = head;
        int pos = 0;
        while (temp != nullptr) {
            if (temp->data == val) {
                return pos;
            }
            temp = temp->next;
            pos++;
        }
        return -1;
    }

    void updateAtPosition(int pos, int newVal) {
        Node* temp = head;
        for (int i = 0; temp != nullptr && i < pos; i++) {
            temp = temp->next;
        }
        if (temp == nullptr) {
            cout << "Position out of bounds\n";
            return;
        }
        temp->data = newVal;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;

    cout << "Inserting at beginning: 30, 20, 10\n";
    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtBeginning(10);
    list.display(); // Expected: 10 -> 20 -> 30 -> NULL

    cout << "\nInserting at end: 40, 50\n";
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.display(); // Expected: 10 -> 20 -> 30 -> 40 -> 50 -> NULL

    cout << "\nInserting 25 at position 2\n";
    list.insertAtPosition(25, 2);
    list.display(); // Expected: 10 -> 20 -> 25 -> 30 -> 40 -> 50 -> NULL

    cout << "\nDeleting from beginning\n";
    list.deleteFromBeginning();
    list.display(); // Expected: 20 -> 25 -> 30 -> 40 -> 50 -> NULL

    cout << "\nDeleting from end\n";
    list.deleteFromEnd();
    list.display(); // Expected: 20 -> 25 -> 30 -> 40 -> NULL

    cout << "\nDeleting from position 1\n";
    list.deleteFromPosition(1);
    list.display(); // Expected: 20 -> 30 -> 40 -> NULL

    cout << "\nSearching for value 30\n";
    int pos = list.search(30);
    if (pos != -1)
        cout << "Found at position: " << pos << endl;
    else
        cout << "Not found\n";

    cout << "\nUpdating position 1 to 99\n";
    list.updateAtPosition(1, 99);
    list.display(); // Expected: 20 -> 99 -> 40 -> NULL

    cout << "\nTrying to insert at invalid position 10\n";
    list.insertAtPosition(60, 10); // Should show error

    cout << "\nTrying to delete from invalid position 10\n";
    list.deleteFromPosition(10); // Should show error

    cout << "\nTrying to update invalid position 10\n";
    list.updateAtPosition(10, 100); // Should show error

    return 0;
}
