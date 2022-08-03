#include<stdio.h>

int GreatestNumBetweenTwo(int iNo1, int iNo2)
{
	if(iNo1 > iNo2)
	{
		return iNo1;
	}
	else
	{
		return iNo2;
	}
}

int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the First Number:\n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number:\n");	
	scanf("%d",&iValue2);
	
	iRet = GreatestNumBetweenTwo(iValue1,iValue2);
	
	if(iRet == iValue1)
	{
		printf("Greatest Number is first number that you entered");
	}
	else
	{
		printf("Greatest Number is second number that you entered");
	}
	
	return 0;
}