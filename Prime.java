import java.util.*;

class PrimeCheck
{
	public boolean CheckPrime(int iNo)
	{
		int iCnt = 0;
		boolean bFlag=true;
		for(iCnt=2,iCnt<=iNo/2;iCnt++)
		{
			if((iNo % iCnt)==0)
			{
				bFlag=false;
				break;
			}
		}
		return bFlag;
	}
}

class Prime
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int iValue = 0;
		boolean bRet = false;
		
		System.out.println("Enter number");
		iValue=sobj.nextInt();
		
		PrimeCheck pcobj=new PrimeCheck();
		bRet=mobj.CheckPrime(iValue);
		
		if(bRet == true)
		{
			System.out.println("It is prime number");
		}
		else
		{
			System.out.println("It is not prime number");
		}
	}
}