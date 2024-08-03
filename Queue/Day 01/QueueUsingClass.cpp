#include <iostream>
using namespace std;

class Queue {
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int x) {
        if (rear == size - 1) {
            cout << "Overflow" << endl;
        } else {
            if (front == -1) front = 0; // Initialize front when the first element is added
            rear++;
            arr[rear] = x;
        }
    }

    void pop() {
        if (front == -1 || front > rear) {
            cout << "Underflow" << endl;
        } else {
            front++;
            if (front > rear) { // Reset front and rear if queue is empty after pop
                front = -1;
                rear = -1;
            }
        }
    }

    int sizes() {
        if (front == -1 || front > rear) {
            return 0;
        } else {
            return rear - front + 1;
        }
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    int top() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return -1; // Return some error value
        } else {
            return arr[front];
        }
    }
};

int main() {
    Queue qt(5);
    qt.push(10);
    qt.push(12);
    cout << "Top element: " << qt.top() << endl;
    qt.pop();
    if (qt.isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    cout << "Current size of the queue: " << qt.sizes() << endl;
    return 0;
}
