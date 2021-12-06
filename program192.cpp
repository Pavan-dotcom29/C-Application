#include<iostream>
using namespace std;
typedef unsigned int UNIT;
UNIT togglerange(UNIT ino,int istart,int iend)
{
    UNIT imask1=0XFFFFFFFF,imask2=0XFFFFFFFF,imask=0;
	UNIT iresult=0;

	imask1=imask1<<(istart-1);
	imask2=imask2>>(32-iend);
	imask=imask1 ^ imask2;

	return iresult;
	
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