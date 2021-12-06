#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char arr[]="pavan";

	fd=open("demo.txt",O_RDWR|O_APPEND);
	if(fd==-1)
	{
		printf("unable to open file \n");

	}

	write(fd,arr,5);

	close(fd);
	return 0;
}