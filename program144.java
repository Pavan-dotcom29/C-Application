import java.util.*;
class program144
{
	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
        int isize=0,icnt=0,iret=0;
		
		System.out.println("entere the elements");
		isize=sobj.nextInt();

        int arr[]=new int[isize];

        System.out.println("eneter the number");
        for(icnt=0;icnt<arr.length;icnt++)
        {
        	arr[icnt]=sobj.nextInt();
        }
        marvellous mobj=new marvellous ();
        iret=mobj.add(arr);

        System.out.println("adddition is:"+iret);
    }
}
class marvellous
{
    public int add(int brr[])
    {
        int isum=0,icnt=0;
        for(icnt=0;icnt<brr.length;icnt++)
        {
            isum=isum+brr[icnt];
        }
        return isum;
    }
}