#include<iostream>
using namespace std;
int sumR(int arr[],int isize)
{
    static int isum=0,i=0;
    if(i<isize)
{
	isum=isum+arr[i];
   	i++;
    sumR(arr,isize);
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
    
     iret=sumR(p,ilength);
     cout<<"addition is :"<<iret<<"\n";
    delete []p;
   return 0;
}