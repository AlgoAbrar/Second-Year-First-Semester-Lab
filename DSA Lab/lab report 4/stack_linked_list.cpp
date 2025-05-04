#include <iostream>
using namespace std;
//bismillah

class Node {
public:
    int data;
    Node* next;
};

Node* top = NULL; 

void push(int value) {
    Node* newNode = new Node(); 
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " value pushed." << endl;
}


void pop() {
    if (top == NULL) {
        cout << "Stack Underflow!" << endl;
    } else {
        Node* temp = top;
        cout << temp->data << " value popped." << endl;
        top = top->next;
        delete temp;
    }
}

bool isEmpty() {
    if (top == NULL) {
        return true;
    } else {
        return false;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Elements: ";
        Node* current = top;
        while (current != NULL) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << endl << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Is Empty?" << endl;
        cout << "4. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            if (isEmpty()) {
                cout << "Stack is empty." << endl;
            } else {
                cout << "Stack is not empty." << endl;
            }
            break;
        case 4:
            display();
            break;
        case 0:
            cout << "Adios boys!!!!!!!" << endl;
            return 0;
        default:
            cout << "Invalid input!" << endl;
        }
    }

    //alhamdulillah
    return 0;
}
