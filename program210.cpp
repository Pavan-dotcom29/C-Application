#include<iostream>
// #include<stdlib.h>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,*PPNODE;

class SinglyLL
{
private:
	PNODE first;
	int size;

public:
	SinglyLL()
	{
		first =NULL;
		size=0;
	}


	void Insertfirst(int no)
	{
      PNODE newn=new NODE; //newn=(PNODE)malloc(sizeof(NODE))
      

      newn->data=no;
      newn->next=NULL;

      if(first==NULL)
      {
      	first=newn;
      }
      else
      {
      	newn->next=first;
      	first=newn;
      }
      size++;
	}
	void InsertLast(int no)
	{
		PNODE newn=new NODE; //newn=(PNODE)malloc(sizeof(NODE))
      

      newn->data=no;
      newn->next=NULL;

      if(first==NULL)
      {
      	first=newn;
      }
      else
      {
      	PNODE temp=first;
      	while(temp->next!=NULL)
      	{
          temp=temp->next;
      	}
      	temp->next=newn;
      }
      size++;

	}
	void InsertAtPos(int no,int ipos)
	{
     size=count(first);
		PNODE temp=first;
		int i=0;

		if((ipos<1)||(ipos>size+1))
		{
			cout<<"invalid position";
			return ;
		}
		if(ipos==1)
		{
			Insertfirst(no);
		}
		else if(ipos==size+1)
		{
			Insertfirst(no);
		}
		else
		{
			PNODE newn=new NODE;
			newn->data=no;
			newn->next=NULL;

			for(i=0;i<ipos-1;i++)
			{
				temp=temp->first;
			}
			newn->next=temp->next;
			temp->next=newn;
		}

	}

	void Deletefirst()
	{
		PNODE temp=first;
		if(first!=NULL)
		{
			first=first->next;
			delete temp;

			size--;
		} 

		
	}

	void DeleteLast()
	{

		PNODE temp=first;
		if(first==NULL)
		{
			return;
		}
		else if(first->next==NULL)
		{
			delete first;
			first=NULL;
			size--;
		}
		else
		{
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}


			delete temp->next;
			temp->next=NULL;
			size--;
		}
		
	}
	void DeleteAtPos(int ipos)
	{

	}
	void Display()
	{
		PNODE temp=first;
		while(temp!=NULL)
		{
			cout<<temp->data<<"\t";
			temp=temp->next;
		}
		cout<<"\n";

	}
	int count()
	{

		return size;

	}





};
int main()
{
	SinglyLL obj;
	int iret=0;

	obj.Insertfirst(51);
    obj.Insertfirst(21);
	// obj.Insertfirst(11);

	obj.InsertLast(101);
	obj.InsertLast(111);
	obj.InsertLast(11);


	obj.Display();

	iret=obj.count();
	cout<<"number of elemenets are :"<<iret<<"\n";

	return 0;





	

}