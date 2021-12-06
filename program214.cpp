#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	struct node *prev;
}NODE,*PNODE;
class doublycl
{
private:
	PNODE first;
	PNODE last;
	int size;

public:
	doublycl()
	{
		first=NULL;
		last=NULL;
		size=0;
	}

	void display();
	int count();
	void insertfirst(int no);
	void insertlast(int no);
	void insertAtpos(int no,int pos);
	void deletefirst();
	void deletelast();
	void deleteAtpos(int pos);








};
///return value class name:: function _name(paramters)

void doublycl::insertfirst(int no)
{
	PNODE newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first==NULL)&&(last==NULL))
	{
		first=newn;
		last=newn;
	}
	else
	{
		newn->next=first;
		first->prev=newn;
		first=newn;
	}

	last->next=first;
	first->prev=last;
	size++;
}

void doublycl::insertlast(int no)
{
	PNODE newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first==NULL)&&(last==NULL))
	{
		first=newn;
		last=newn;
	}
	else if(first==last)
	{
		first=NULL;
		last=NULL;

	}
	else
	{
		last->next=newn;
		newn->prev=last;
		last->next=first;
	   first->prev=last;
	}
size++;
	
}

void doublycl::deletefirst(int no)
{
	PNODE newn=new NODE;
	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if((first==NULL)&&(last==NULL))
	{
		first=newn;
		last=newn;
	}
	else if(first==last)
	{
		//first=first->prev;
		delete last->next;
		first=NULL;
		last=NULL;
		

	}
	else
	{
		last=last->prev;
		delete last->prev;
		fisrt->prev=last;
		last->next=first;
	}

	size--;
	
}


void doublycl::display()
{
	PNODE temp=first;

	for(int i=1;i<=size;i++)
	{
		cout<<"|"<<temp->data<<"|->";
		temp=temp->next;
	}
	cout<<"\n";
}

int doublycl::count()
{
	return size;
}

void doublycl::deletelast()
{
	if((first==NULL)&&(last==NULL))
	{
		return ;
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
    }
	size--;
}

void doublycl::insertAtpos(int no,int pos)
{
	if((ipos<1)||(ipos>size+1))
	{
		return ;
	}
	else if((ipos==size+1))
	{
		insertfirst(no);
	}
	else
	{


		PNODE newn=new NODE;

		newn->data=no;
		newn->next=NULL;
		newn->prev=NULL:

		PNODE temp=first;

		for(int i=1;i<ipos-1;i++)
		{
			temp=temp->next;
		}

		newn->next=temp->next;
		newn->next->prev=newn;
		temp->next=newn;
		newn->prev=temp;
		size++;
	}

}

void doublycl::deleteAtpos(int ipos)
{
	if((ipos<1)||(ipos<size))
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

    	for(i=1;i<ipos-1;i++)
    	{
    		temp=temp->next;

    	}
    	temp->next=temp->next->next;
    	delete temp->next->prev;
    	temp->next->prev=temp;

    	size--;

    }
}
int main()
{
	doublycl obj;

	obj.insertfirst(21);
	obj.insertfirst(11);

	obj.insertlast(51);
	obj.insertlast(101);

	obj.insertAtpos(75,3);
	obj.display();
	int iret=obj.count();
	cout<<"number of eleemnts are :"<<iret<<"\n";

	obj.deleteAtpos(3);
	obj.deletefirst();
	obj.deletelast();
	obj.display();
	return 0;


	
	return 0;
}