#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
///abcdefghijklmnopqrstuvwxyz
int main()
{
	int fd=0;
	

	fd=open("demo.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unable to open file \n");
		return -1;

	}
  
	lseek(fd,10,2);

	write(fd,"*",1);
    printf("\n");


	close(fd);
	return 0;
}