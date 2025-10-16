#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int value){
    if(top==max-1){
        printf("stack overflow!%d\n",value);
    }
    else{
        top++;
        stack[top]=value;
        printf("%dpushed into stack.\n",value);
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow!no element to pop.\n");
    }
    else{
        int poped=stack[top];
        top--;
        printf("%d poped from stack.\n,value");
    }
}
void display(){
    if(top==-1){
        printf("stack is empty.\n");
    }
    else{
        printf("stack element:");
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
    }
int main(){
    int choice ,value;
    while(1){
        printf("\nstack operation:\n");
        printf("1.push\n2.push\n3.display\n4.exit\n");
        printf("enter your choice:");
        scanf("%d,&choice:");
        switch(choice){
            case 1:
               printf("enter value to push:");
               scanf("%d",&value);
               push(value);
               break;
            case 2:
            pop();
            break;
        case 3:
             display();
             break;
        case 4:
            printf("exiting program.\n");
            return 0;
        default :
        printf("invalid choice!please try again.\n");
        }
    }
}
}