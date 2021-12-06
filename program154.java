import java.util.*;
class program154
{
	public static void main(String arg[])
	{
	
		marvellous mobj=new marvellous();
		mobj.Accept();
		mobj.Display();
		String s=mobj.ReverseX();
		System.out.println("reverse string is :"+s);
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
	public String ReverseX()
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
		return String.valueOf(Arr);

	}
}



