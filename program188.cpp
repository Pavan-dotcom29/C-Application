#include<iostream>
using namespace std;
typedef unsigned int UNIT;

//iNO 0000 0000 1110 0100 1111 0100 1011 1010
//ipos 6
//iret 0000 0000 1110 0100 1111 0100 1001 1010

int toggelebit(int ino, int ipos)
{
	int imask=0X00000001;
	if((ipos<1)||(ipos>32))
	{
		return 0;
	}


	imask=imask<<(ipos-1);
	iresult=ino^imask;
	return iresult;

//postiton =5;
	//mask 0 0 0 0 0 0 0 1
	//imask <<(poistiom-1)
	//imask=imask<<(5-1)
    //imask=imask<<4
    //imask  0 0 0 1 0 0 0 0

    //input  0 1 1 0 0 1 0 0
    //imask  0 0 0 1 0 0 0 0

    //output 0 1 1 1 0 1 0 0

}
int main()
{
	int ivalue=0,iret=0,i=0;
	cout<<"enter the number\n";
	cin>>ivalue;
     
    cout<<"entere the position of bit"\n;
    cin>>i;

	iret=toggelebit(ivalue,i);

    cout<<"updated number is :"<<iret<<"\n";

    

   	return 0;
}