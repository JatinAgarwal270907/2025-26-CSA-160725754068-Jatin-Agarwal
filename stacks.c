#include <stdio.h>
#define MAX 5

struct stack {
    int data[MAX];
    int top;
};

struct stack s; // Global stack object

// Initialize Stack
void init() {
    s.top = -1;
}

// Push Operation
void push(int x) {
    if (s.top == MAX - 1) {
        printf("Stack Overflow \n");
    } else {
        // top++;
        // s.data[top] = x;
        // Combined line below:
        s.data[++s.top] = x;
    }
}

// Pop Operation
void pop() {
    if (s.top == -1) {
        printf("Stack Underflow \n");
    } else {
        printf("Popped : %d \n", s.data[s.top--]);
    }
}

// Display Stack
void display() {
    if (s.top == -1) {
        printf("Stack is empty \n");
    } else {
        for (int i = s.top; i >= 0; i--) {
            printf("%d ", s.data[i]);
        }
        printf("\n");
    }
}

int main() {
    init();

    push(10);
    push(20);
    push(30);

    display();
    pop();
    display();

    return 0;
}
