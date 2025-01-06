#include<stdio.h>
#include<conio.h>
int i,j, choice=0,n,stack[100] ,top = -1;
void push();
void pop();
void Display();
void main()
{
    printf("Enter the number of elements in the stack");
    scanf("%d", &n);
    printf("----------Stack operation using array-------------")
    ;
    while(choice!=4)
    {
        printf("Choose one from the below options..\n");
        printf("\n n1.push\n n2.pop\n n3.Show \n n4.Exit");
        printf(" \n Enter your choice \n");
        scanf("%d",&choice);

         switch(choice)
         {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            Display();
            break;
            case 4:
            printf("Exiting.....");
            break;
            default:
            printf("Please Enter valid choice");
         }
         
    };
}
void push()
{
    int val;
    if(top==n)
    printf("\n Overflow");
    else
    {
        printf("Ente the value  =");
        scanf("%d", &val);
        top+=1;
        stack[top] = val;
    }
}
void pop()
{
    if(top== -1)
    printf("Underflow");
    else
    top = top -1;
}

void Display()
{
    for(i=top; i>=0 ; i++)
    {
        printf("%d\n", stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}