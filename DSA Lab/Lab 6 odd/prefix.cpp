#include <bits/stdc++.h>
using namespace std;
int arr[20];
int top = -1;
void push(int data)
{
    top += 1;
    arr[top] = data;
}
/*void print()
{
    for (int i = 0; i <= top; i++)
        cout << arr[i] << " ";
}*/
int pop()
{
    int data = arr[top];
    top -= 1;
    return data;
}
int main()
{
    string s;
    cin >> s;
    for (int i = s.length(); i >= 0; i--)
    {
        if (s[i] >= '1' && s[i] <= '9')
            push(s[i] - '0');
        else
        {
            int op2 = pop();
            int op1 = pop();
            int result;
            if (s[i] == '+')
                result = op1 + op2;
            else if (s[i] == '-')
                result = op1 - op2;
            else if (s[i] == '*')
                result = op1 * op2;
            else if (s[i] == '/')
                result = op1 / op2;
            else if (s[i] == '^')
                result = pow(op1, op2);
            push(result);
        }
    }
    cout << arr[top] << endl;
    return 0;
}