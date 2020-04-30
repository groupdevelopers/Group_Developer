#include<stdio.h>
int main()
{
	int no1,no2,ch,result;
	
	printf("\nEnter Two Numbers: ");
	scanf("%d %d",&no1,&no2);
	
	printf("\nEnter 1 For Addition.");
	printf("\nEnter 2 For Subtraction.");
	printf("\nEnter 3 For Multiplication.");
	printf("\nEnter 4 For Division.");
	
A:	printf("\nEnter Your Choice: ");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:result = no1 + no2;
		printf("\nAddition = %d",result);
		break;
		
		case 2:result = no1 - no2;
		printf("\nSubtraction = %d",result);
		break;
		
		case 3:result = no1 * no2;
		printf("\nMultiplication = %d",result);
		break;
		
		case 4:result = no1 / no2;
		printf("\nDivision = %d",result);
		break;
		
		default : printf("\nPlease Enter A Valid Choice.");
		goto A;
	}
	return 0;
}
