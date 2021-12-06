#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	int fd=0;
	char data[11]={'\0'};
	fd=open("demo.txt",O_RDWR);

	read(fd,data,5);

	printf("data is %s\n",data);

	close (fd);

	return 0;
}