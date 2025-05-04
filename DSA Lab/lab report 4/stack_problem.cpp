#include <bits/stdc++.h>
using namespace std;

int stackss[5];
int sizee = 0;

void push(int value) {
    if (sizee == 5) {
        cout << "Stack Overflow!" << endl;
    } else {
        
        for (int i = sizee - 1; i >= 0; i--) {
            stackss[i + 1] = stackss[i];
        }
        stackss[0] = value;
        sizee++;
        cout << value << " pushed at the beginning." << endl;
    }
}

void pop() {
    if (sizee == 0) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stackss[0] << " popped." << endl;
        
        for (int i = 0; i < sizee - 1; i++) {
            stackss[i] = stackss[i + 1];
        }
        sizee--;
    }
}

bool isEmpty() {
    return sizee == 0;
}

bool isFull() {
    return sizee == 5;
}

void peek() {
    if (isEmpty()) {
        cout << "No elements." << endl;
    } else {
        cout << "Top element is: " << stackss[0] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements: ";
        for (int i = 0; i < sizee; i++) {
            cout << stackss[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. IsEmpty\n";
        cout << "4. IsFull\n";
        cout << "5. Peek (Top Element)\n";
        cout << "6. Display\n";
        cout << "0. Exit\n";
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
            cout << (isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 4:
            cout << (isFull() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        case 5:
            peek();
            break;
        case 6:
            display();
            break;
        case 0:
            cout << "Adios boys!!!!!!!" << endl;
            return 0;
        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
