#include<iostream>
using namespace std;
void displayI()
{
    int icnt=1;
	while(icnt<=4)
	{
		cout<<"marvelouss\n";
		icnt++;
	}
}
void displayR()
{
 static	int icnt=1;
        if(icnt<=4)
	{
		cout<<"marvelouss\n";
		icnt++;
		displayR();
	}
}
int main()
{
	displayR();
	return 0;
}