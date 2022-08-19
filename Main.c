#include "Header.h"

int main()
{
	int iValue1=0, iValue2=0,iRet=0;
	
	printf("Enter first number\n");
	scanf("%d",&iValue1);
	
	printf("Enter second number\n");
	scanf("%d",&iValue2);
	
	iRet=Addition(iValue1, iValue2);
	
	printf("Addition is: %d",iRet);
	
	return 0;
}