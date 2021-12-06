#include<iostream>
using namespace std;
typedef unsigned int UNIT;
UNIT togglerange(UNIT ino,int istart,int iend)
{
    imask1=imask1<<(istart-1);
	imask2=imask2>>(32-iend);
	imask=(0XFFFFFFFF << (istart-1)) && (0XFFFFFFFF  >> (32-iend));
    return();
}
int main()
{
	UNIT ivalue=0,iret=0,i=0,j=0;
	cout<<"enter the number\n";
	cin>>ivalue;

	cout<<"enter starting position number\n";
	cin>>i;

	cout<<"enter ending position number\n";
	cin>>j;
    iret=togglerange(ivalue,i,j);
    cout<<"updated number is :"<<iret<<"\n";
    return 0;
}