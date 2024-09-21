#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,x,sum=0;

	cout<<"Enter a four digit number:";
	cin>>x;

	a=x%10;
	x=x/10;
	b=x%10;
	x=x/10;
	c=x%10;
	x=x/10;
	d=x%10;

	sum=a+b+c+d;
	cout<<"Sum of individual digits:"<<sum<<endl;	
	
	return 0;
}