import java.util.*;

class StringX
{
	public String str;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("Enter String");
		str=sobj.nextLine();
	}
	
	public void Display()
	{
		System.out.println("String is: "+str);
	}
}

class ReverseString extends StringX
{
	public String ReverseX()
	{
		char Arr[]=str.toCharArray();
		int iStart=0, iEnd=Arr.length-1;
		char temp;
		while(iStart<iEnd)
		{
			temp=Arr[iStart];
			Arr[iStart]=Arr[iEnd];
			Arr[iEnd]=temp;
			iStart++;
			iEnd--;
		}
		return new String(Arr);
	}
}

class StringReverse extends StringX
{
	public static void main(String args[])
	{
		ReverseString rsobj=new ReverseString();
		rsobj.Accept();
		rsobj.Display();
		String s=rsobj.ReverseX();
		System.out.println("Reverse string is: "+s);
	}
}