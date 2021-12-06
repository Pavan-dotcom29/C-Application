#include<iostream>
using namespace std;
int sumI(int ino)
{
	int isum=0;
	while(ino!=0)
	{
		isum=isum+(ino%10);
		ino=ino/10;
	}
	return isum;
}

int sumR(int ino)
{
	 static int isum=0;
    if(ino!=0)
    {
    	isum=isum+(ino%10);
    	ino=ino/10;
    	sumR(ino);
    	
    }

    return isum;
}

int main()
{
	int x=0,iret=0;
	cout<<"eneetr the number\n";
	cin>>x;

	iret=sumI(x);
	cout<<"summmation of didgite :"<<iret<<"\n";

cout<<"eneetr the number\n";
	cin>>x;

	iret=sumR(x);
	cout<<"summmation of didgite :"<<iret<<"\n";

	return 0;
}
