import java.util.*;
class program156
{
	public static void main(String arg[])
	{
	
		marvellous mobj=new marvellous();
		mobj.Accept();
		mobj.Display();
		boolean bret;
		bret=mobj.checkpallindrome();
		if(bret==true)
		{
			System.out.println("string is pallindroam");
		}
		else
		{
			System.out.println("string is not pallindroam");

		}
		}
}
class StringX
{
	public String str;
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		System.out.println("entere the string");
		str=sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("string is:"+str);
	}
}
class marvellous extends StringX  
{
	public boolean checkpallindrome()
	{
		char Arr[]=str.toCharArray();
		int istart=0,iend=Arr.length-1;
		char temp;
		while(istart<iend)
		{
			temp=Arr[istart];
			Arr[istart]=Arr[iend];
			Arr[iend]=temp;
			istart++;
			iend--;
		}
		String newstr=new String(Arr);
		Boolean bret=newstr.equals(str);
		return bret;

	}
}



