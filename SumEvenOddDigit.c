#include<stdio.h>

int SumEvenOddDigit(int iNo)
{
	int iDigit = 0, iESum = 0, iOSum = 0; 
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 == 0)
		{
			iESum = iESum + iDigit;
		}
		else
		{
			iOSum = iOSum + iDigit;
		}
		iNo=iNo/10;
	}
	
	
	return iESum - iOSum;
}

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	iRet = SumEvenOddDigit(iValue);
	
	printf("%d",iRet);
	
	return 0;
}