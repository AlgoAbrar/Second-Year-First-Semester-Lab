#include<bits/stdc++.h>
using namespace std;
//bismillah
int stackss[100];  
int top = -1;  

void push(int value) {
    if (top == 99) { 
        cout << "stackss Overflow!!!!!!!!" << endl;
    } else {
        top++;
        stackss[top] = value;
        cout << value << " value pushed." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "stackss Underflow!" << endl;
    } else {
        cout << stackss[top] << " value popped" << endl;
        top--;
    }
}

bool isEmpty() {
    if (top == -1) {
        return true;
    } else {
        return false;
    }
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

int main() {
    int choice, value;

    while (true) {
        cout <<endl << "Menu:"<<endl;
        cout << "1. Push"<<endl;
        cout << "2. Pop"<<endl;
        cout << "3. Is Empty?"<<endl;
        cout << "4. Display"<<endl;
        cout << "0. Exit"<<endl;
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
                cout << "Empty." << endl;
            } else {
                cout << "Not empty." << endl;
            }
            break;
        case 4:
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
    //alhamdulillah
}
