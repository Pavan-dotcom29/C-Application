#include<iostream>
using namespace std;
typedef unsigned int UNIT;
int toggelebit(int ino, int ipos1,int ipos2)
{
	int imask1=0X00000001;
	int imask2=0X00000001;
	int imask=0,iresult=0;
	imask1=imask1<<(ipos1-1);
	imask2=imask2<<(ipos2-1);
	imask=imask1||imask2;
     iresult=ino ^ imask;
     return iresult;
}
int main()
{
	int ivalue=0,iret=0,i=0,j=0;
	cout<<"enter the number\n";
	cin>>ivalue;
    cout<<"entere the first position of bit\n";
    cin>>i;
    cout<<"entere the second position of bit\n";
    cin>>j;
    iret=toggelebit(ivalue,i,j);
    cout<<"updated number is :"<<iret<<"\n";
    return 0;
}