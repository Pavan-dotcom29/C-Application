#include<iostream>
using  namespace std;



void swap(char *p,char *q)

{
	char temp;

	temp=*p;
	*p=*q;
	*q=temp;

	

}
int main()
{

char  x='\0',char y='\0';
cout<<"entere the number\n";
cin>>x;

cout<<"eneet the second number \n";
cin>>y;

swap(&x,&y);

cout<<"value of x becomes:"<<x<<"\n";
cout<<"value of x becomes:"<<y<<"\n";







	return 0;
}