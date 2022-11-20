#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num,temp1,temp2;
	cout<<"\n ENTER THE NUMBER BELOW 100:";
	cin>>num;
	num>100;
	temp1=num%10;
	temp2=num/10;
	cout<<"the resualt is:"<<temp1<<temp2;
	getch();
	return 0;
}