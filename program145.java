import java.util.*;
class program145
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int ilength=0,iret=0;
        System.out.println("eneter the number of eemenets");
        ilength=sobj.nextInt();

        marvellous mobj=new marvellous(ilength);
        mobj.Accept();
        mobj.Display();
        iret=mobj.add();
        System.out.println("addition is :"+iret);
     }
}
class ArrayX
{
    public int arr[];

    public ArrayX(int isize)
    {
        arr=new int[isize];
    }
    public void Accept()
    {
        Scanner sobj=new Scanner(System.in);
        int icnt=0;       
        System.out.println("entere the elements");
        for(icnt=0;icnt<arr.length;icnt++)
        {
            arr[icnt]=sobj.nextInt();
        }
    }
    public void Display()
    {
        int icnt=0;
        System.out.println("enenet are");
        for(icnt=0;icnt<arr.length;icnt++)
        {
            System.out.println(arr[icnt]);
        }
    }
}
class marvellous extends ArrayX
{
    public marvellous(int ivalue)
    {
        super(ivalue);
    }
    public int add()
    {
        int isum=0,icnt=0;
        for(icnt=0;icnt<arr.length;icnt++)
        {
            isum=isum+arr[icnt];
        }
        return isum;
    }
}