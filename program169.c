#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char arr[10];

	fd=open("demo.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unable to open file \n");

	}

	read(fd,arr,5);
	printf("data from file is:\n");

	write(1,arr,5);

	close(fd);
	return 0;
}