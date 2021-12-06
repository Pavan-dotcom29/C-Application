import java.util.*;
class program150
{
	public static void main(String arg[])
	{
		StringX sobj=new StringX();
		sobj.Accept();
		sobj.display();

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
	public void display()
	{
		System.out.println("string is:"+str);
	}
}