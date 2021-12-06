import java.util.*;
class program141
{
   public static void main(String arg[])
   {
      Scanner sobj=new Scanner(System.in);
      int ivalue=0;
      boolean bret=false;
      System.out.println("enter the number");
      ivalue=sobj.nextInt();

      marvellous mobj=new marvellous();
      bret=mobj.checkprime(ivalue);

      if(bret==true)
      {
         System.out.println("it is prime number");

      }
      else
      {
         System.out.println("it is not prime number");
      }
   }
}
class marvellous
{
   public boolean checkprime(int ino)
   {
      int icnt=0;
      boolean bflag=true;

      for(icnt=2;icnt<=ino/2;icnt++)
      {
         if((ino% icnt)==0)
         {
            bflag=false;
            break;
         }
      }
      return bflag;
  }
}