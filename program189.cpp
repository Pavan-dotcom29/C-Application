#include<iostream>
using namespace std;


int countbit(int ino)
{
	int i=0,icnt=0,iret=0,iresult=0;
	int imask=0X00000001;

	for(i=1;i<32;i++)
	{
		iresult=ino&imask;
		if(iresult!=0)       ///if(iresult=imask)
		{
		icnt++;

		}
		imask=imask<<1;
		//00000001
		//00000010
		//00000100
		//00001000
		//00010000
		//00100000
		//01000000
		//10000000


	}
return icnt;
}
int main()
{
	int ivalue=0,iret=0;

	cout<<"enter the number\n";
	cin>>ivalue;

	iret=countbit(ivalue);

	cout<<"number of bits which are ON "<<iret<<"\n";
	return 0;
}