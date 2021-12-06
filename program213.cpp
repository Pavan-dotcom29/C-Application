#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE;

class singlycl
{
private:
	PNODE first;
	PNODE last;
	int size;

	public:
	singlycl()
	{
		first=NULL;
		last=NULL;
		size=0;
	}

	void display()
	{

		PNODE temp=first;
		if((first==NULL)&&(last==NULL))
		{
            return ;
		}

		do
		{
			cout<<"|"temp->data<<"|->";
			temp=temp->data;
		}while(temp!last->next);

   cout<<"\n";
	}
	int count()
	{
		return size;
	}
	void insertfirst(int no)
	{
		PNODE newn=new NODE;
		newn->data=no;
		newn->next=NULL;

		if((first==NULL && last==NULL))
		{
			first=newn;
			last=newn;
		}

		else
		{
			newn->next=first;
			first=newn;
		}
		last->next=first;
		size++;

	}
	void insertlast(int no)
	{

		PNODE newn=new NODE;
		newn->data=no;
		newn->next=NULL;

		if(first==NULL && last==NULL)
		{
			first=newn;
			last=newn;
		}

		else
		{
			last->next=newn;
			last=newn;



		}
		last->next=first;
		size++;


	}
	void insertAtpos(int no,int pos)
	{

		if((ipos<1)||(ipos<(size+1)))
		{
			return;
		}
		if(pos==1)
		{
			insertfirst(no);
		}
		else if(pos==size+1)
		{
			insertlast(no);
		}
		else
		{
			PNODE newn=new NODE;

			newn->data=no;
			newn->next=NULL;
        PNODE temp=first;

			for(int i=1;i<ipos-1;i++)
			{
				temp=temp->next;
			}

			newn->next=temp->next;
			temp->next=newn;

			size++;





		}

	}
	void deletefirst()
	{

		if((first==NULL)&&(last==NULL))
		{
			return;
		}
		else if(first==last)
		{

			delete first;
			first=NULL;
			last=NULL;


		}
		else
		{
      first=first->next;
			delete last->next;
			last->next=first;


		}
     size--;
	}
	void deletelast()
	{
		PNODE temp=first;
		if((first==NULL)&&(last==NULL))
		{
			return;
		}
		else if(first==last)
		{

			delete first;
			first=NULL;
			last=NULL;


		}
		else
		{


			while(temp->next!=last)
			{
				temp=temp->next;
			}
			delete last;

			last=temp;

			last->next=first;

            

		}
     size--;

	}
	void deleteAtpos(int ipos)
	{

		if(ipos<1)||(ipos>size)
		{
			return ;
		}

		if(ipos==1)
		{
			deletefirst();
		}

		else if(ipos==size)
		{
			deletelast();
		}

		else
		{
			PNODE temp=first;

			for(int i=1;i<ipos;i++)
			{
				temp=temp->next;
			}

			PNODE target=temp->next;

			temp->next=target->next;
			delete target;

			size--;
		}

	}
};



int main()
{

  singlycl obj();

  int iret=0;
  obj.insertfirst(51);
  obj.insertfirst(21);
  obj.insertfirst(11);

  obj.insertlast(101);

  obj.insertAtpos(555,4);


  obj.display();
  iret=obj.count();

  cout<<"number of elemnets are:"<<iret<<"\n";
  
  obj.deleteAtpos(4);
  obj.deletefirst();
  obj.deletelast();


  obj.display();
  iret=obj.count();
  cout<<"number of elemeents are :"<<iret<<"\n";



	return 0;
}