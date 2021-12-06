// import java.util.*;

class Node
{
	public int data;
	public Node next;
}

class SinglyLL
{
    private Node first;
    private int size;


    public SinglyLL()
    {

    	this.first=null;
    	this.size=0;
    }


    public void Insertfirst(int no)
    {
    	Node newn=null;
    	newn= new Node();

    	newn.data=no;
    	newn.next=null;


    	if(first==null)
    	{
              first=newn;
    	}
    	else
    	{
    		newn.next=first;
    		first=newn;

    	}
    	this.size++;

    }

    public void display()
    { 
    	Node temp=first;

    	System.out.println("Elemnts from linked lists are");
    	while(temp!=null)
    	{
    		System.out.println("|"+temp.data+"|->");
    		temp=temp.next;
    	}
    	System.out.println("null");

    }

    public int count()
    {
    	return this.size;
    }

    public void InsertLast(int no)
    {


    	Node newn=null;
    	newn= new Node();

    	newn.data=no;
    	newn.next=null;


    	if(first==null)
    	{
              first=newn;
    	}
    	else
    	{
    		Node temp=first;
    		while(temp.next!=null)
    		{
    			temp=temp.next;
    		}
    		temp.next=newn;
    	}
    	this.size++;
    }

    public void DeleteFirst()
    {
    	if(size==0)
    	{
    	
    		return ;
        }
    	if(size==1)
    	{

    		first=null;
    		this.size--;
    	}
    	else
    	{

    		first=first.next;

    	}

    	this.size--;



    	
    }



     public void Deletelast()
    {
    	if(size==0)
    	{
    	
    		return ;
        }
    	if(size==1)
    	{

    		first=null;
    		this.size--;
    	}
    	else
    	{

    		Node temp=first;
    		while(temp.next.next!=null)
    		{

    			temp=temp.next;
    		}
    		temp.next=null;

    	}

    	this.size--;



    	
    }

    public void InsertAtPos(int no,int pos)
    {


    	if(pos<0)||(pos>size+1)
    	{
    		return ;
    	}

    	if(pos==1)
    	{
    		Insertfirst(no);


    	}

    	else if(pos=size+1)
    	{
    		InsertLast(no);
    	}
    	else
    	{
    		Node newn=new Node();
    		newn.data=no;
    		newn.next=data;
    		 Node temp=first;

    		 for(int i=1;i<pos-1;i++)
    		 {
    		 	temp=temp.next;
    		 }

    		 newn.next=temp.next;
    		 temp.next=newn;
    		 this.size++;
    	}
    }





     public void DeleteAtPos(int no,int pos)
    {


    	if(pos<0)||(pos>size+1)
    	{
    		return ;
    	}

    	if(pos==1)
    	{
    		Deletefirst(no);


    	}

    	else if(pos=size+1)
    	{
    		DeleteLast(no);
    	}
    	else
    	{
    		node temp=first;

    		for(int i=1;i<pos-1;i++)
    		{

    			temp=temp.next;
    		}
    		
    	}
    }
}


class program250
{

	public static void main(String arg[])
	{

        SinglyLL obj=new SinglyLL();

        obj.Insertfirst(51);
        obj.Insertfirst(21);
        obj.Insertfirst(11);

        obj.DeleteFirst();

        obj.Deletelast();



        obj.InsertLast(111);
        obj.InsertLast(101);





        obj.display();

        System.out.println("Number of elements are :"+obj.count());



	}
}
