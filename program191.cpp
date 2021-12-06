#include<iostream>
using namespace std;
typedef unsigned int UNIT;
UNIT toggelebit(int ino)
{
	UNIT imask=0XF000000F;
	UNIT iresult;
    iresult=ino ^ imask;
    return iresult;
}
int main()
{
	UNIT ivalue=0,iret=0;
	cout<<"enter the number\n";
	cin>>ivalue;
    iret=toggelebit(ivalue);
    cout<<"updated number is :"<<iret<<"\n";
    return 0;
}