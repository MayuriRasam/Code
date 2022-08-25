import java.util.*;

class AdditionBL
{
	public int AdditionBL1(int i, int j)
	{
		int iResult=0;
		iResult=i+j;
		return iResult;
	}
}

class Addition
{
	public static void main(String args[])
	{
		Scanner sobj=new Scanner(System.in);
		int iNo1 = 0, iNo2 = 0, iAns = 0;
		
		System.out.println("Enter First Number");
		iNo1=sobj.nextInt();
		
		System.out.println("Enter Second Number");
		iNo2=sobj.nextInt();
		
		AdditionBL aobj=new AdditionBL();
		iAns=aobj.AdditionBL1(iNo1, iNo2);
		
		System.out.println("Addition is: "+iAns);
	}
}