#include <bits/stdc++.h>
using namespace std;
// bismillah
int stackss[5];
int top = -1;

void push(int value) {
    if (top == 4) {
        cout << "stackss Overflow!!!!!!!!" << endl;
    } else {
        top++;
        stackss[top] = value;
        cout << value << " value pushed." << endl;
    }
}

bool isEmpty() {
    return (top == -1);
}

bool isFull() {
    return (top == 4);
}

void display() {
    if (isEmpty()) {
        cout << "Empty." << endl;
    } else {
        cout << "Elements: ";
        for (int i = top; i >= 0; i--) {
            cout << stackss[i] << " ";
        }
        cout << endl;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "stackss Underflow!" << endl;
    } else {
        cout << stackss[top] << " value popped" << endl;
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "No element." << endl;
    } else {
        cout << "Top element is: " << stackss[top] << endl;
    }
}

int main() {
    int choice, value;

    while (true) {
        cout << endl << "Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. IsEmpty" << endl;
        cout << "4. IsFull" << endl;
        cout << "5. Peek (Top Element)" << endl;
        cout << "6. Display" << endl;
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
            cout << (isEmpty() ? "Empty." : "Not empty.") << endl;
            break;
        case 4:
            cout << (isFull() ? "Full." : "Not full.") << endl;
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
            cout << "Invalid input" << endl;
        }
    }

    return 0;
    // alhamdulillah
}
