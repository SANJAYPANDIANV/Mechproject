#include<stdio.h>
#include<conio.h>
int main()
{
	int num1 , num2 ;
	char op ;
	
	printf("Enter your first number :");
	scanf("%d",&num1);
	
	printf("Enter your second number :");
	scanf("%d",&num2);
	
	printf("Enter your character :");
	scanf("\n%c",&op);
	
	switch(op)
	{
		case '+':
			printf("Addition : %d",(num1 + num2));
			break;
			
		case '-':
			printf("Subtraction : %d",(num1 - num2));
			break;
			
		case '*':
			printf("Multiplication : %d", (num1 * num2));
			break;
			
		case '/':
			printf("Division : %f", (num1 / num2));
			break;
			
		default:
			printf("Invalid operator");
			break;
		
	}
	getch();
	return 0;
}

