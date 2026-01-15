#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int arr[5];
public:
    Stack() {
        top = -1; 
    }


    void push(int x) {
        if (top >= 4) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack." << endl;
    }


    int pop() {
        if (top < 0) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (top < 0) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.peek() << endl;

    cout << s.pop() << " popped from stack." << endl;
    cout << s.pop() << " popped from stack." << endl;

    if (s.isEmpty())
        cout << "Stack is empty now." << endl;
    else
        cout << "Stack is not empty." << endl;

    return 0;
}
