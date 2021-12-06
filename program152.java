import java.util.*;
class program152
{
	public static void main(String arg[])
	{
		int iret=0;
		marvellous mobj=new marvellous();
		mobj.Accept();
		mobj.Display();
		iret=mobj.CountVowels();
		System.out.println("number of vowels are:"+iret);
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
	public int CountVowels()
	{
		char Arr[]=str.toCharArray();
		int icnt=0,i=0;
		while(i<Arr.length)
		{
			if((Arr[i]=='a')||(Arr[i]=='e')||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
			icnt++;
		}
		i++;
	}
	return icnt;
}



