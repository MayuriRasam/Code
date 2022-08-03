#include<stdio.h>

int SumOfNNaturalNum(int iNo)
{
	int iCnt = 0, iSum = 0;
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum+iCnt;
	}
	
	return iSum;
	
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter the number that you want print sum:");
	scanf("%d",&iValue);
	
	iRet = SumNaturalNum(iValue);
	
	printf("Sum of natural number: %d",iRet);
	
	return 0;
}