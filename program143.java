import java.util.*;
class program143
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
        int isize=0,icnt=0;
		
		System.out.println("entere the elements");
		isize=sobj.nextInt();

        int arr[]=new int[isize];

        System.out.println("eneter the number");
        for(icnt=0;icnt<arr.length;icnt++)
        {
        	arr[icnt]=sobj.nextInt();
        }
        System.out.println("enetered the elemnts are");

        for(icnt=0;icnt<arr.length;icnt++)
        {
        	System.out.println(arr[icnt]);
        }

    }
}