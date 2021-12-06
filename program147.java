import java.util.*;
import MarvellousNumbers.ArrayX;


class program147
{
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        int ilength=0;
        float fret=0.0f;
        System.out.println("eneter the number of eemenets");
        ilength=sobj.nextInt();

        marvellous mobj=new marvellous(ilength);
        mobj.Accept();
        mobj.Display();
        fret=mobj.Average();
        System.out.println("Avaerge  is :"+fret);
     }
}

class marvellous extends ArrayX
{
    public marvellous(int ivalue)
    {
        super(ivalue);
    }
    public float Average()
    {
        int isum=0,icnt=0;
        for(icnt=0;icnt<arr.length;icnt++)
        {
            isum=isum+arr[icnt];
        }
        return (isum/arr.length);
    }
}