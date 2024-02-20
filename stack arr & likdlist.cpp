#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    
    Node(int val) : data(val), next(nullptr) {}
};


class ArrayStack {
private:
    int* array;
    int capacity;
    int top;

public:
    ArrayStack(int size) : capacity(size), top(-1) {
        array = new int[capacity];
    }

    ~ArrayStack() {
        delete[] array;
    }

    void push(int value) {
        if (top < capacity - 1) {
            array[++top] = value;
            std::cout << "Pushed into array stack: " << value << std::endl;
        } else {
            std::cout << "Array stack overflow!" << std::endl;
        }
    }

    void pop() {
        if (top >= 0) {
            std::cout << "Popped from array stack: " << array[top--] << std::endl;
        } else {
            std::cout << "Array stack underflow!" << std::endl;
        }
    }
};


class LinkedListStack {
private:
    Node* top;

public:
    LinkedListStack() : top(nullptr) {}

    ~LinkedListStack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        std::cout << "Pushed into linked list stack: " << value << std::endl;
    }

    void pop() {
        if (top != nullptr) {
            std::cout << "Popped from linked list stack: " << top->data << std::endl;
            Node* temp = top;
            top = top->next;
            delete temp;
        } else {
            std::cout << "Linked list stack underflow!" << std::endl;
        }
    }
};

int main() { int nullptr;
    ArrayStack arrayStack(5);
    arrayStack.push(1);
    arrayStack.push(2);
    arrayStack.pop();
    arrayStack.push(3);

    
    LinkedListStack linkedListStack;
    linkedListStack.push(10);
    linkedListStack.push(20);
    linkedListStack.pop();
    linkedListStack.push(30);

    return 0;
}

