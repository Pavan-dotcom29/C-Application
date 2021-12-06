import java.util.*;
 class chkvowel
 {
 	public static void main (String arg[])
 	{
        
 		marvellous mobj=new marvellous();
         int iret=0;

 		mobj.Accept();
 		mobj.Display();

 		iret=mobj.chkvowel();
 		System.out.println("count are"+iret);

 	}
 }
 class StringX
 {
 	String str;

 	public void Accept()
 	{
 		Scanner sobj=new Scanner(System.in);
 		System.out.println("ennter the string");
 		str=sobj.nextLine();
 	}

 	public void Display()
 	{
 		System.out.println("vowels are:"+str);
 	}

 }

class marvellous extends StringX
{
     int icnt=0,i=0;
     charr arr[]=str.toCharArray();
	public int chkvowel()
	{
      for(icnt=0;icnt<arr.length;icnt++)
     {
     	if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='o')||(arr[i]=='i')|(arr[i]=='u'))
     		icnt++;

     }
     return icnt; 

	}


}