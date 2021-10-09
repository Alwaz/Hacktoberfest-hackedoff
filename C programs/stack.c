#include<stdio.h>
int stack[10],choice,n,top,x,i; 

void push();
void pop();
void peek();
void isempty();
void display();

int main()
{
 top = -1;   
 printf("Enter the size of stack : ");
 scanf("%d",&n);
 do
 {
 printf("\n1.Push\n2.Pop\n3.Peek or Top\n4.Is empty\n5.Display the stack\n6.End");
 printf("\nEnter the stack operation  : ");
 scanf("%d",&choice);
 switch(choice)
 {
    case 1:
    {
        push();
        break;
    }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
        peek();
        break;
    }
    case 4:
    {
        isempty();
        break;
    }
     case 5:
    {
        display();
        break;
    }
    case 6:
    {
     break;
    }
    default:
    {
        printf ("\nInvalid Choice\n");
    }
 }
}
 while(choice!=6);
 return 0;
}

void push()
{
 if(top >= n - 1)        
 {
    printf("\nSTACK OVERFLOW\n");    
 }
 else
 {
    printf("\nEnter a value to be pushed : ");
    scanf("%d",&x);
    top++;             
    stack[top] = x;   
 }
}

void pop()
{
 if(top <= -1)
 {
    printf("\nSTACK UNDERFLOW\n");
 }
 else
 {
    printf("\nThe popped element is %d\n",stack[top]);   
    top--;     
 }
}

void peek()
{
    if(top==-1)
    {
        printf("\nUnderflow\n");
    }
    else
    {
        printf("\nThe top element of stack is : %d\n",stack [top]);
    }
}

void isempty()
{
    if(top<0)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack is not empty\n");
    }
}

void display()
{
 if(top >= 0)
 {
     printf("\nThe stack is : ");
    for(i = top ; i >= 0 ; i--)
    printf("%d\t",stack[i]);
    printf("\n");
 }
 else
 {
    printf("\nEMPTY STACK\n");
 }
}