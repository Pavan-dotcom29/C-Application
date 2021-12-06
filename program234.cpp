#include<iostream>
using namespace std;
int FactorialI(int ino)
{
	int fact=1;
	while(ino!=0)
	{
		fact=fact*ino;
		ino--;
	}
	return fact;
}

int FactorialR(int ino)
{
	static int fact=1;
	if(ino!=0)
	{
		fact=fact*ino;
		ino--;
		FactorialR(ino);
	}
	return fact;
}
int main()
{
	int x=0,iret=0;
	cout<<"eneetr the number\n";
	cin>>x;
	iret=FactorialR(x);
	cout<<"factorial of didgite :"<<iret<<"\n";
   return 0;
}