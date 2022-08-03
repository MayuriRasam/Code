#include<stdio.h>

int PositiveorNegative(int iNo)
{
	int flag=0;
	if(iNo > 0)
	{
		flag=1;
	}
	
	return flag;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number:\n");
	scanf("%d",&iValue);
	
	iRet=PositiveorNegative(iValue);
	
	if(iRet == 1)
	{
		printf("Positive number");
	}
	else
	{
		printf("Negative number");
	}
	
	return 0;
}