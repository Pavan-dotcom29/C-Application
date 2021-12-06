#include<iostream>
using namespace std;
void displayI(int ino)
{
    int icnt=1;
	while(icnt<=ino)
	{
		cout<<"marvelouss\n";
		icnt++;
	}
}
void displayR(int ino)
{
 static	int icnt=1;
        if(icnt<=ino)
	{
		cout<<"marvelouss\n";
		icnt++;
		displayR(ino);
	}
}
int main()
{
	int i=5;
	// displayI(i);
	displayR(i);
	return 0;
}