#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0,isum=0,iret=0,i=0;
	char fname[20];
    char Buffer[10];
    
    printf("enter file name is :\n");
    scanf("%s",fname);

    fd=open(fname,O_RDWR);

    if(fd==-1)
    {
    	printf("ubale to open the file \n");
    	return -1;
    }
    while((iret=read(fd,Buffer,10))!=0)
    {
    	isum=isum+iret;
    }
    printf("total number of a are :%d\n",isum);
    close(fd);
    return 0;
}
