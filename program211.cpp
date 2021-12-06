#include<iostream>
#define TRUE 1
#define FALSE 0
using namespace std;
typedef int BOOL;

struct node
{
 int data;
 struct node * next;
};
typedef struct NODE;
typedef struct *PNODE;

class singlell
{
private:
	PNODE head;

public:
	singlell();
	~singlell();

	BOOL insertfirst(int);
	BOOL insertlast(int);
	BOOL insertAtpos(int,int);

	inline void display();
	inline void count();

	BOOL deletefirst();
	BOOL deletelast();
	BOOL deleteAtpos(int);
};

singlell::singlell();
{
	head=NULL;
}

singlell::~singlell();
{
  PNODE temp,nav;
  if(head=NULL)
  {
  	nav=head;
  	while(nav=!NULL)
  	{
  		temp=nav->next;
  		delete nav;
  		nav=temp;
  	}

  }

}
BOOL singlell::insertfirst(int no)
{

	PNODE newn=NULL;
	newn new =NODE;
	if(newn==NULL)
	{
		return false;
	}

	newn->data=no;
	newn->next=NULL;


	if(head==NULL)
	{
		head=newn;
	}
	else
	{

		newn->next=head;
		head=newn;
	}
	return true;

}
BOOL singlell::insertlast(int no)
PNODE newn=NULL,temp=head;
{
	if(head==NULL)
	{
   return false;

	}

	newn->data=no;
	newn->next=NULL;

	if(head==NULL)
	{
		head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{

			temp=temp->next;

		}
		temp->next=newn;

	}
	return TRUE;


}

BOOL singlell::insertAtpos(int pos ,int no)
{

	if(head==NULL)||(pos>count()+1)||(pos<=0)
	{
		return false;
	}
	if(pos==1)
	{
		return insertAtpos(no);
	}

	else if((pos==count())+1)
	{
		insertAtpos(no);
	}
	else
	{
		PNODE newn=NULL,temp=head;
		newn=NODE;

		newn->data=no;
		newn->next=NULL;

		for(int i=1;i<=(pos-2);i++)
		{
		temp=temp->next;

		}

		newn->next=temp->next;
		temp->next=newn;



	}
	return TRUE;


}

BOOL singlell::deletefirst()
{
	PNODE temp=head;
	if(head=NULL)
	{
		return false;

	}
	else
	{
		head=head->next;
		free(temp;)
	}
	return true;


}
BOOL singlell::deletelast()
{


	PNODE temp=head;
	if(head==NULL)
	{
		return false;
	}
	else if(temp->next==NULL)
	{
      delete temp;
      head=NULL;
	}
	else
	{
		PNODE temp1=head,temp2=NULL;
		while(temp1->next!==NULL)
		{
            temp1=temp1->next;
		}
		temp2=temp1->next;
		freee(temp2);

	}return true;
}
BOOL singlell::deleteAtpos()
{

	PNODE temp=head;
	if(head==NULL)||(pos>count())||(pos<=0)
	{
		return false;
	}
	else
	{
		if(pos==1)
		{
			return deletefirst();
		}
		else if(pos==count())
		{
			deletelast();

		}
		else
		{
			PNODE temp1=head,temp2=NULL;

			for(int i=1;i<=(pos-2);i++)
			{
                temp1=temp1->next;
                ++i;
			}
			temp2=temp1->next;
			temp1->next=temp2->next;

			delete(temp2);
		}
		return true;
	}

  void singlell::display()
  {
  	PNODe temp=head;
  	while(temp!=NULL)
  	{
  		cout<<temp->data<<" ->";
  		temp=temp->data;
  	}
  	cout<<"NULL\n";
  }
int singlell::count()
{
	PNODE temp=head;
	int icnt=0;
	while(temp!=NULL)
	{
		icnt++;
		temp=temp->next;








	}
	return icnt;
}


int main()
{
	singlell obj1;
     Singly_linkedList *obj2 = new Singly_linkedList(); 

	obj1.insertfirst(51);
	obj1.insertfirst(21);
	obj1.insertfirst(11);

	obj1.display();

	cout<<"\n numbers of node are "<<obj1.count()<<"\n";

	 obj1.InsertFirst(101);
 obj1.InsertFirst(111);

 obj1.Display();

 cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

 obj1.InsertAtPosition(75,4);
 obj1.Display();

 cout<<"\nNumber of nodes : "<<obj1.Count()<<"\n";

 obj1.DeleteFirst();
 obj1.Display();

 obj1.DeleteLast();
 obj1.Display();
  obj2->InsertFirst(501);
obj2->InsertFirst(511);
 obj2->InsertFirst(521);

 obj2->Display();

 obj2->InsertLast(551);
 obj2->InsertAtPosition(601,3);

 obj2->Display();

 cout<<"\nNumber of nodes : "<<obj2->Count()<<"\n";

 delete obj2;

 return 0;
}

	obj1.insertlastr(101);


}
}