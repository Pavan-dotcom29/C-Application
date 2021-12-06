import java.util.*;
class program138
{

	public static void main(String arg[])
	{
		Scanner sobj=new Scanner(System.in);
        int ino1=0,ino2=0,ians=0;

        System.out.println("enter the fisrt number");
        ino1= sobj.nextInt();

        System.out.println("ennetetthe scond number");
        ino2=sobj.nextInt();

        marvellous mobj=new marvellous();
        ians=mobj.addition(ino1,ino2);

       System.out.println("addition is :"+ians);
    }
}

class marvellous
{
 public int addition(int i,int j) 
 {    
    int iresult=0;
    iresult=i+j;
    return iresult;
 }

}