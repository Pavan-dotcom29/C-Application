#include<iostream>
using  namespace std;



void swap(float *p,float *q)

{
	float temp;

	temp=*p;
	*p=*q;
	*q=temp;

	

}
int main()
{

float x=0,y=0;
cout<<"entere the number\n";
cin>>x;

cout<<"eneet the second number \n";
cin>>y;

swap(&x,&y);

cout<<"value of x becomes:"<<x<<"\n";
cout<<"value of x becomes:"<<y<<"\n";







	return 0;
}