### 🧱 Experiment 19: Stack Implementation (Array-Based) 🧱

This repository contains the C++ implementation of a fundamental **Stack** data structure using a fixed-size array. It demonstrates the core principles and operations adhering to the **Last-In, First-Out (LIFO)** policy.

-----

### 🎯 Aim

To understand, implement, and demonstrate the essential **Stack Operations**: **Push** (insertion) and **Pop** (deletion) using a static array in C++.

-----

### 💡 Theory: The Stack Data Structure

A **Stack** is a linear data structure that follows the **LIFO (Last-In, First-Out)** principle. This means the last element added to the stack is the first element to be removed. Think of it like a stack of plates—you can only add a new plate to the top, and you can only take the top plate off.

  * **Top**: The key pointer that tracks the location of the last element inserted into the stack. All operations (Push, Pop, Peek) occur at the `top`.
  * **LIFO**: The last item placed on the stack is the first one removed.

#### **Core Operations:**

1.  **Push**: Inserts an element onto the top of the stack.
2.  **Pop**: Removes and returns the element at the top of the stack.
3.  **Peek (or Top)**: Returns the top element without removing it.
4.  **isEmpty**: Checks if the stack contains any elements.
5.  **isFull**: Checks if the stack has reached its maximum capacity (relevant for array-based stacks).

-----

### ⚙️ Algorithms: Push and Pop

The implementation uses an integer array (`arr`) of size `MAX_SIZE` and an index variable `top`, initialized to `-1` for an empty stack.

#### 1\. Push Operation (Insertion)

The **Push** algorithm checks for **Stack Overflow** (when the array is full) before adding a new element.

**Algorithm:**

1.  **Start.**
2.  **Check for Overflow:** If `top == MAX_SIZE - 1`, display "Stack Overflow" and **End**.
3.  **Else (Push):**
      * Increment `top`: `top++`.
      * Insert the value at the new top index: `arr[top] = value`.
4.  **End.**

**Flowchart:**

```mermaid
graph TD
    A[Start Push] --> B{isFull?};
    B -- Yes --> C[Display Overflow];
    B -- No --> D[Increment top];
    D --> E[arr[top] = value];
    E --> F[End];
    C --> F;
```

#### 2\. Pop Operation (Deletion)

The **Pop** algorithm removes the element at the `top` and checks for **Stack Underflow** (when the stack is empty).

**Algorithm:**

1.  **Start.**
2.  **Check for Underflow:** If `top == -1`, display "Stack Underflow" and return a sentinel value (e.g., -1).
3.  **Else (Pop):**
      * Store the value at `arr[top]` (the element to be returned).
      * Decrement `top`: `top--`.
4.  Return the stored value.
5.  **End.**

**Flowchart:**

```mermaid
graph TD
    A[Start Pop] --> B{isEmpty?};
    B -- Yes --> C[Display Underflow & Return -1];
    B -- No --> D[PoppedValue = arr[top]];
    D --> E[Decrement top];
    E --> F[Return PoppedValue];
    F --> G[End];
    C --> G;
```

-----

### 🔧 Array-Based Stack Limitations

This implementation uses a fixed-size array, leading to a crucial limitation:

  * **Static Size**: The stack cannot hold more than `MAX_SIZE` elements. Once full, any further `push` operation results in a **Stack Overflow**.
  * **Wasted Space**: If the maximum required size is unknown, defining a large `MAX_SIZE` can lead to wasted memory. This is typically solved by using a **dynamic array (Vector)** or a **Linked List** implementation of the stack.

-----

### 🌐 Industrial Applications

Stacks are fundamental in computer science and are used extensively in:

  * **Function Calls**: The runtime environment uses a stack (the **Call Stack**) to manage function calls, local variables, and return addresses.
  * **Expression Evaluation**: Used to convert and evaluate arithmetic expressions (Infix to Postfix/Prefix).
  * **Undo/Redo Mechanisms**: In text editors and software, stacks store recent actions to allow easy reversal (undo) or reapplication (redo).
  * **Browser History**: The back button functionality in web browsers uses a stack to store the history of visited URLs.

-----

### ⚙️ Tools Used

  * **Language**: C++
  * **Compiler**: g++
  * **Environment**: Any C++ IDE (e.g., VS Code, Code::Blocks)
