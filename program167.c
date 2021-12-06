#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{

	char fname[30];
	int fd=0;

	printf("enter the file to craete \n");
	scanf("%s",&fname);

	fd=creat(fname,0777);
	if(fd!=-1)
	{
      printf("file get craete succesfully");
	}
	return 0;

}
