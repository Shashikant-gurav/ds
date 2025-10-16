#include <stdio.h>
#include <stdlib.h>  // Include for exit()

#define max 5
int stack[max];
int top = -1;

void push(int value) {
    if (top == max - 1) {
        printf("Stack overflow! %d cannot be pushed.\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow! No element to pop.\n");
    } else {
        int popped = stack[top];
        top--;
        printf("%d popped from stack.\n", popped);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice, value;
    while (1) {
        printf("\nStack operations:\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;  // Proper exit of the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;  // Return statement for proper program termination
}
