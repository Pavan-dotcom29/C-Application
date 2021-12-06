#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

int main()
{
	int fd=0;
	char data[11]="hello";


	 fd=open("demo.txt",O_RDWR);

	 write(fd,data,5);

	 close(fd);
	 return 0;
}