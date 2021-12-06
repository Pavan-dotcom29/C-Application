#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
	struct node * prev;
}NODE,*PNODE,**PPNODE;


void Insertfirst(PPNODE Head,int no)
{
	PNODE newn=NULL;
	


	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		(*Head)->prev=newn;
		*Head=newn;



	}


}

void InsertLast(PPNODE Head,int no)
{
	PNODE newn=NULL;
	PNODE temp=*Head;

	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;
	newn->prev=NULL;

	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
		new->prev=temp;
	}
	
}
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");

}
int count(PNODE Head)
{
	int icnt=0;
	while(Head!=NULL)
	{
		icnt++;
		Head=Head->next;
	}
	return icnt;

}
int main()
{
	PNODE first=NULL;
	Insertfirst(&first,51);
	Insertfirst(&first,21);
	Insertfirst(&first,11);

	InsertLast(&first,101);
	

	Display(first);
	icnt=count(first);
	printf("nuimber if elements%d\n",icnt);






	
	
	

	
	




	return 0;
}
