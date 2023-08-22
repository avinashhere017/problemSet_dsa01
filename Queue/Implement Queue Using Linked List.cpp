/**
 * Definition of linked list
 * class Node {
 * 
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 * 
 * Definition of Queue
 * struct Queue {
 *   Node* front;
 *   Node* rear;
 *   void push(int);
 *   int pop();
 *   
 *   Queue() {
 *       front = rear = NULL;
 *   }
 * };
 */

void Queue::push(int x) {
    // Write Your Code Here
   Node* newNode = new Node(x);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

}

int Queue::pop() {
    // Write Your Code Here
     if (front == nullptr) {
            return -1; // Queue is empty
        }
        
        Node* temp = front;
        int poppedValue = temp->data;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr; // Queue is now empty
        }

        temp->next=NULL;
        return poppedValue;
}
