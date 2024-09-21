#include<iostream>
using namespace std;
int main()
{
	//task is using only 2 variable
 	//lopp uses initialization variable so it will not be possible by loop as 2 variables will be used
	int x,sum=0;

	cout<<"Enter integer1:";
	cin>>x;
	sum=sum+x;
	cout<<"Enter integer2:";
	cin>>x;
	sum=sum+x;
	cout<<"Enter integer3:";
	cin>>x;
	sum=sum+x;
	cout<<"Enter integer4:";
	cin>>x;
	sum=sum+x;
	cout<<"Enter integer5:";
	cin>>x;
	sum=sum+x;

	cout<<"Sum of integers is:"<<sum<<endl;
	
	return 0;
}