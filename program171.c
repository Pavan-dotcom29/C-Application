#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
///abcdefghijklmnopqrstuvwxyz
int main()
{
	int fd=0;
	char arr[10];

	fd=open("demo.txt",O_RDWR);
	if(fd==-1)
	{
		printf("unable to open file \n");
		return -1;

	}
   ///////////
	//0 from starting position
	//1  from current position
	//2  from end of file
	lseek(fd,-5,2);
	read(fd,arr,5);
	write(1,arr,5);
    printf("\n");

	lseek(fd,5,1);
	read(fd,arr,5);
	write(1,arr,5);
	printf("\n");

	close(fd);
	return 0;
}