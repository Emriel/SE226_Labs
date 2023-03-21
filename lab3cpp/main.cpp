#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int x, Node *n)
    {data=x; next=n;}

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Queue {
    private:
        Node* front;
        Node* rear;
        int count;

    public:
        Queue(){
            front = NULL;
            rear = NULL;
            count = 0;
        }

        void enqueue(int data){
            Node* newNode = new Node(data);

            if(rear == NULL) {
                front = newNode;
                rear = newNode;
            }
            else {
                rear->next = newNode;
                rear = newNode;
            }
            count++;
        }

        void dequeue(){
            if(front == NULL){
                cout << "Queue is empty!" << endl;
                return;
            }

            Node* temp = front;

            if (front == rear) {
                front = NULL;
                rear = NULL;
            }
            else {
                front = front->next;
            }

            cout << "Dequeued item: " << temp->data << endl;
            delete temp;
            count--;
        }

        int top() {
            if (front == NULL) {
                cout << "Queue is empty!" << endl;
                return -1;
            }

            return front->data;
        }

        bool isEmpty(){
            return front == NULL;
        }

        int size(){
            return count;
        }
};


int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.dequeue();
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.dequeue();
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.dequeue();
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.dequeue();
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;
    q.dequeue();
    cout << "Top element: " << q.top() << endl;
    cout << "Size of queue: " << q.size() << endl;

    return 0;
}
