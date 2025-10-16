#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Stack operations
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow! Cannot pop\n");
        return -1; 
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

int main() {
    int arr[MAX], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n > MAX || n < 1) {
        printf("Invalid array size.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        push(arr[i]);
    }
    for (int i = 0; i < n; i++) {
        arr[i] = pop();
    }
    printf("Reversed list:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
