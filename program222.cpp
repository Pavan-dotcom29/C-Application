#include<iostream>
using  namespace std;


//specfic function
void swap(char *p,char *q)

{
	char temp;

	temp=*p;
	*p=*q;
	*q=temp;

	

}
//generic function

template <class T>
void swapX(T *p,T *q)

{
	T temp;

	temp=*p;
	*p=*q;
	*q=temp;

	

}
int main()
{

char  x='\0',y='\0';
cout<<"entere the number\n";
cin>>x;

cout<<"eneet the second number \n";
cin>>y;

swap(&x,&y);

cout<<"value of x becomes:"<<x<<"\n";
cout<<"value of y becomes:"<<y<<"\n";







	return 0;
}