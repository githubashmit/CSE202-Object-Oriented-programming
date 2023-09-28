//Create a doubly linked list . node count take from user insert new node at the beginning last and fourth position.
#include <iostream>

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtLast(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void insertAtFourthPosition(int value) {
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            std::cout << "List should have at least three nodes to insert at the fourth position." << std::endl;
            return;
        }

        Node* newNode = new Node(value);
        Node* current = head;
        for (int i = 0; i < 3; i++) {
            current = current->next;
        }

        newNode->next = current->next;
        newNode->prev = current;
        current->next = newNode;
        if (newNode->next != nullptr) {
            newNode->next->prev = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;
    int nodeCount, value;

    std::cout << "Enter the number of nodes: ";
    std::cin >> nodeCount;

    for (int i = 0; i < nodeCount; i++) {
        std::cout << "Enter the value for node " << i + 1 << ": ";
        std::cin >> value;
        dll.insertAtLast(value);
    }

    std::cout << "Doubly Linked List: ";
    dll.display();

    std::cout << "Enter the value to insert at the beginning: ";
    std::cin >> value;
    dll.insertAtBeginning(value);

    std::cout << "Enter the value to insert at the last: ";
    std::cin >> value;
    dll.insertAtLast(value);

    std::cout << "Enter the value to insert at the fourth position: ";
    std::cin >> value;
    dll.insertAtFourthPosition(value);

    std::cout << "Updated Doubly Linked List: ";
    dll.display();

    return 0;
}
