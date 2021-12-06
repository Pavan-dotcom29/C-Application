import java.util.*;
class program149
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
         String str;
		System.out.println("enter your name");
		str=sobj.nextLine();

		marvellous mobj=new marvellous();
		mobj.display(str);
	}
}

class marvellous
{
	public void display(String data)
	{
		System.out.println("welcome to :"+data);
	}
}