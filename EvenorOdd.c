#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL EvenorOdd(int iNo)
{
	if(iNo % 2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet = EvenorOdd(iValue);
	
	if(iRet == TRUE)
	{
		printf("Entered number is Even");
	}
	else
	{
		printf("Entered number is Odd");
	}
	
	return 0;
}