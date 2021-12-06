#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
}
typedef struct NODE;
typedef struct *PNODE;
typedef struct **PPNODE;


void display(PNODE head,PNODE tail)
{
	if((head==NULL)&&(tail==NULL))
	{
		return ;
	}

	do{
		printf("|%d|->",head->data);
		head=head->next;
	}
	while();

	printf("\n");

}
int count(PNODE head,PNODE tail)
     int icnt=0;
{
	if((head==NULL)&&(tail==NULL))
	{
		return ;
     
	}
	do{
		icnt++;
		head=head->next;
	}
	while(head!=tail->next);

	return icnt;
}
void insertfirst(PPNODE head,PPNODE tail,int no)
{
	PNODE newn=NULL:
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))//ll is empty
	{
		*head=newn;
		*tail=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
    }
    (*tail)->next=*head;//to maintain circlar nature

}
void insertlast(PPNODE head,PPNODE tail,int no)
{
	PNODE newn=NULL:
	newn=(PNODE)malloc(sizeof(NODE));

	newn->data=no;
	newn->next=NULL;

	if((*head==NULL)&&(*tail==NULL))//ll is empty
	{
		*head=newn;
		*tail=newn;
	}
	else
	{
		   (*tail)->next=*newn;
     *tail=newn;
 }
    (*tail)->next=*head;//to maintain circlar nature

}
void insertAtpos(PPNODE head,PPNODE tail,int no,int ipos)
{

}
void deletefirst(PPNODE head,PPNODE tail)
{
	if((head=NULL)&&(tail==NULL))
	{
		return;
	}
	else if(*head==*tail)
	{
		free(*head);
		*head=NULL;
		*tail=NULL;
	}
	else
	{
           *head=(*head)->next;
           free(*tail)->next;
	       (*tail)->next=*head;

	}
	

}
void deletelast(PPNODE head,PPNODE tail)
{

	PNODE temp=*head;


	if((head=NULL)&&(tail==NULL))
	{
		return;
	}
	else if(*head==*tail)
	{
		free(*head);
		*head=NULL;
		*tail=NULL;
	}
	else
	{
		while(temp->next!=*tail)
		{
			temp=temp->next;
		}
		free(*tail);
		*tail=temp;
		(*tail)->next=*head;




	}

}
void deleteAtpos(PPNODE head,PPNODE tail,int pos)
{

} 

int main()

{
	int iret=0;
	PNODE first=NULL;
	PNODE last=NULL;

    insertfirst(&first,&last,51);
    insertfirst(&first,&last,21);
    insertfirst(&first,&last,11);

    insertlast(&first,&last,101);

    display(first,last);
    iret=count(first,last);

    printf("number of elemets are : %d\n",iret);


	return 0;
}








