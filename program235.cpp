#include<iostream>
using namespace std;
int sumI(int arr[],int isize)
{
    int isum=0,i=0;
	for(i=0;i<isize;i++)
	{
	isum=isum+arr[i];
    }
	return isum;
}
int main()
{
    int ilength=0,i=0;
    int *p=NULL;
	int iret=0;
	cout<<"ennter the numbre\n";
	cin>>ilength;

	p=new int[ilength];

	cout<<"enneet the elements\n";

	for(i=0;i<ilength;i++)
	{
		cin>>p[i];
	}
    
     iret=sumI(p,ilength);
     cout<<"addition is :"<<iret<<"\n";
    delete []p;
   return 0;
}