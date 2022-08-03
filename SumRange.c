#include<stdio.h>

int SumNumRange(int iStart, int iEnd)
{
	int iSum = 0;
    
    for(int i=iStart+1;i < iEnd;i++)
    {
		iSum = iSum + i; 
	}		
	
	return iSum;
}

int main()
{
	int iValue1=0,iValue2=0, iRet=0;
	
	printf("Enter the number that you want to start the number range");
	scanf("%d",&iValue1);
	
	printf("Enter the number that you want to end the number range");
	scanf("%d",&iValue2);
	
	iRet = SumNumRange(iValue1, iValue2);
	
	printf("Sum is:%d",iRet);
	
	return 0;
}