#include<iostream>
using namespace std;


class marvellous
{
 
 public:
 	int addition(int x,int y)
 	{
 		int ians=0;
 		ians=x+y;

 		return ians;
 	}


};
int main()
{
	int ino1=0,ino2=0,iret=0;
	marvellous mobj;

	 cout<<"enter the number\n";
	 cin>>ino1;

     cout<<"enter the second\n";
	 cin>>ino2;

	iret=mobj.addition(ino1,ino2);
	
     cout<<"adition is :"<<iret<<"\n";
	 return 0;
}