#include<stdio.h>

#define No1GT 0
#define No2GT 1
#define No3GT 2


int GreatestAmoungThree(int iNo1, int iNo2, int iNo3)
{
	if((iNo1>iNo2)&&(iNo1>iNo3))
	{
		return No1GT;
	}
	else if((iNo2>iNo3)&&(iNo2>iNo1))
	{
		return No2GT;
	}
	else if((iNo3>iNo1)&&(iNo3>iNo2))
	{
		return No3GT;
	}
}

int main()
{
	int iValue1=0, iValue2=0, iValue3=0,iRet=0;
	
	printf("Enter the First Number");
	scanf("%d",&iValue1);
	
	printf("Enter the Second number");
	scanf("%d",&iValue2);
	
	printf("Enter the Third number");
	scanf("%d",&iValue3);
	
	iRet = GreatestAmoungThree(iValue1, iValue2, iValue3);
	
	if(iRet== No1GT)
	{
		printf("Number 1 is greater Amoung three");
	}
	else if(iRet== No2GT)
	{
		printf("Number 2 is greater Amoung three");
	}
	else if(iRet == No3GT)
	{
		printf("Number 3 is greater Amoung three");
	}
	
	return 0;
}