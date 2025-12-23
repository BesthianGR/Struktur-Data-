#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

bool isEmpty(Node *top) {
    return top == nullptr;
}

void push(Node *&top, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = top;
    top = newNode;
}

int pop(Node *&top) {
    if (isEmpty(top)) {
        cout << "Stack Kosong, tidak bisa di pop!" << endl;
        return 0; 
    }
    
    int poppedData = top->data;
    Node* temp = top;
    top = top->next;

    delete temp;
    return poppedData;
}

void show(Node *top) {
    if (isEmpty(top)) {
        cout << "Stack Kosong!" << endl;
        return;
    }

    cout << "TOP -> ";
    Node *temp = top;

    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node *stack = nullptr;

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);


    cout << "Menampilkan isi stack: " << endl;
    show(stack);

    cout << "Pop elemen: " << pop(stack) << endl;

    cout << "Menampilkan sisa stack setelah pop: " << endl;
    show(stack);
    return 0;
}