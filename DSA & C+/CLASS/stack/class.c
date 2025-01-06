#include<stdio.h>
#define N 5

//function prototype for push operation
int push(int arr[], int *, int);

int main()
{
int val,result;
int stack[N];  
int top=-1;
char ch;

while(top<N-1)
{
	printf("Enter the value you want to insert in the stack:");
	scanf("%d",&val);

	//calling push function
	result=push(stack, &top, val);      //passing the address of the top

	if(result==1)
	printf("\nThe value is successfully inserted");

	else
	printf("\nThe value couldn't be inserted as the stack is full");


	//Asking user if he/she wants to enter more items in the stack
	printf("\n Do you want to insert another item Y/N?:");
	scanf (" %c",&ch);
	if(ch!='Y' && ch!='y')
	break;
}

//Checking if the stack is full
if(top==N-1)
printf("\nSorry the stack is full. You cannot enter more items");

return 0;
}

int push(int stack[], int *pot, int a)
{
	if (*pot==N-1)
	{
		return 0;
	}
	else 
	{
		*pot=*pot+1;
		stack[*pot]=a;
		return 1;
	}
}