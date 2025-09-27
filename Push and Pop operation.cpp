// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>
using namespace std;

#define MAX_SIZE 10 // Maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE]; // Array to store stack elements
    int top;           // Index of the top element

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // -1 indicates the stack is empty
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return top == -1;
    }

    // Check if the stack is full
    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << ". Stack is full." << endl;
            return;
        }
        // Increment top and insert the value
        arr[++top] = value;
        cout << value << " pushed to stack." << endl;
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop from an empty stack." << endl;
            // In a production system, you might throw an exception.
            return -1; // Return a sentinel value
        }
        // Return the top element and then decrement top
        int poppedValue = arr[top--];
        cout << poppedValue << " popped from stack." << endl;
        return poppedValue;
    }

    // Function to display the top element (peek)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[top];
    }
    
    // Function to display all stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to display." << endl;
            return;
        }
        cout << "Stack elements (Top to Bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << (i == 0 ? "" : " | ");
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    // --- Push Operations ---
    cout << "--- PUSH OPERATIONS ---" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    // Demonstrate Stack Overflow
    // Push until the stack is full, then attempt one more push
    // for (int i = 4; i <= 10; ++i) s.push(i * 10);
    // s.push(110); // This will trigger Stack Overflow

    // --- Pop Operations ---
    cout << "\n--- POP OPERATIONS ---" << endl;
    s.pop(); // Pop 30
    s.display();

    cout << "Top element is: " << s.peek() << endl; // Top is 20
    
    s.pop(); // Pop 20
    s.pop(); // Pop 10
    
    // Demonstrate Stack Underflow
    s.pop(); // This will trigger Stack Underflow

    return 0;
}
