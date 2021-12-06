import java.util.*;
class program142
{
   public static void main(String arg[])
   {
      Scanner sobj=new Scanner(System.in);
      int ivalue=0;
      boolean bret=false;
      
      System.out.println("enter the number");
      ivalue=sobj.nextInt();

      marvellous mobj=new marvellous();
      bret=mobj.checkarmstrong(ivalue);

      if(bret==true)
      {
         System.out.println("it is armstrong");
      }
      else
      {
         System.out.println("it is not armstrong");
      }
   }
}
class marvellous
{
   public boolean checkarmstrong(int ino)
   {
      int itemp=0,idigcnt=0,idigit=0,ipower=1,icnt=0,isum=0;
      if(ino<0)
      {
         ino=-ino;
      }
      itemp=ino;
      while(itemp!=0)
      {
         idigcnt++;
         itemp=itemp/10;
      }
      itemp=ino;

      while(itemp!=0)
      {
         idigit=itemp%10;
   
      for(icnt=1;icnt<=idigcnt;icnt++)
      {
            ipower=ipower*idigit;
      }
      isum=isum+ipower;

      ipower=1;

         itemp=itemp/10;
      }
      if(isum==ino)
      {
         return true;
      }
      else
      {
         return false;
      }
  
}
}