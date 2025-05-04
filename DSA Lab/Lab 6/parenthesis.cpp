#include <bits/stdc++.h>
using namespace std;
// bismillah
struct Node {
    char data;
    Node* next;
};

Node* top = nullptr;

void push(char value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed to stack." << endl;
}

bool isEmpty() {
    return (top == NULL);
}

void pop() {
    if (isEmpty()) {
        cout << "Stack Underflow!" << endl;
    } else {
        Node* temp = top;
        top = top->next;
        delete temp;
    }
}

char peek() {
    if (!isEmpty()) {
        return top->data;
    } else {
        return '\0';
    }
}

bool isBalanced(string expression) {
    for (int i = 0; i < expression.length(); i++) {
        char ch = expression[i];
        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty())
                return false;
            char topChar = peek();
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
            pop();
        }
    }
    return isEmpty();
}

int main() {
    string expression;
    cout << "Enter expression: ";
    getline(cin, expression);

    if (isBalanced(expression)) {
        cout << "Balanced." << endl;
    } else {
        cout << "Not Balanced." << endl;
    }

    return 0;
    // alhamdulillah
}
