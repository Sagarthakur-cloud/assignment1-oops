#include <iostream>
using namespace std;


class Queue {
private:
    int front, rear;
    int arr[5];

public:

    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear >= 4) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        if (front == -1) front = 0; 
        arr[++rear] = x;
        cout << x << " enqueued to queue." << endl;
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        return arr[front++];
    }

    int peek() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element is: " << q.peek() << endl;

    cout << q.dequeue() << " dequeued from queue." << endl;
    cout << q.dequeue() << " dequeued from queue." << endl;

    if (q.isEmpty())
        cout << "Queue is empty now." << endl;
    else
        cout << "Queue is not empty." << endl;

    return 0;
}
