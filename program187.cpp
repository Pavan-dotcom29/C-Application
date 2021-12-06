#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

using namespace std;

class marvellousfile
{
public:
	char fname[30];
	int fd;

	marvellousfile(char *Name)
	{
		cout<<"inside the constructor ";
		strcpy(fname,Name);
		fd=open(fname,O_RDWR);

	}
	~marvellousfile()
	{
		cout<<"inside the dsetructor ";
		close(fd);

	}
void display()
{
	int iret=0;
	char Buffer[10];
	lseek(fd,0,0);


	cout<<"data from file is :\n";
	while((iret=read(fd,Buffer,10))!=0)
	{
		write(1,Buffer,iret);

	}
}

int countcapital()
{
	int iret=0,icnt=0,i=0;
	char Buffer[10];
	lseek(fd,0,0);

	while((iret=read(fd,Buffer,10))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((Buffer[i]>='A')&&(Buffer[i]<='Z'))
			{
				icnt++;
			}
		}
	}
	return icnt;
}

int countsmall()
{
	int iret=0,icnt=0,i=0;
	char Buffer[10];
	lseek(fd,0,0);

	while((iret=read(fd,Buffer,10))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((Buffer[i]>='a')&&(Buffer[i]<='z'))
			{
				icnt++;
			}
		}
	}
	return icnt;
}

int countdigit()
{
	int iret=0,icnt=0,i=0;
	char Buffer[10];
	lseek(fd,0,0);

	while((iret=read(fd,Buffer,10))!=0)
	{
		for(i=0;i<iret;i++)
		{
			if((Buffer[i]>='0')&&(Buffer[i]<='9'))
			{
				icnt++;
			}
		}
	}
	return icnt;
}





};
int main()
{

	char Name[30];
	int iret=0;

	cout<<"enter the the name \n";
    cin>>Name;

    marvellousfile obj(Name);
    obj.display();

   iret=obj.countcapital();
   cout<<"capital letters are "<<iret<<"\n";
   
     iret=obj.countsmall();
   cout<<"countsmall letters are "<<iret<<"\n";

  iret=obj.countdigit();
   cout<<"countdigit are "<<iret<<"\n";


	return 0;
}
