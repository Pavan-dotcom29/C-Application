package MarvellousNumbers;
import java.util.*;
public class ArrayX
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