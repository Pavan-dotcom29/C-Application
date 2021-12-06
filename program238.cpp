#include<iostream>
#include<stdio.h>
using namespace std;

int strlenI(char *str)
{
	int icnt=0;
	while(*str!='\0')
	{
		icnt++;
		str++;
	}
	return icnt;
}



int strlenR(char *str)
{
	static int icnt=0;
	if(*str!='\0')
	{
		icnt++;
		str++;
		strlenR(str);
	}
	return icnt;
}
int main()
{
	char arr[20];
	int iret=0;

	cout<<"enete the string\n";
	scanf("%[^\n]s",arr);


    iret=strlenR(arr);

    cout<<"length of string :"<<iret<<"\n";
	return 0;
}