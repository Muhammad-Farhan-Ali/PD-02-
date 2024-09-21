#include<iostream>
using namespace std;
int main()
{
	int age,moved,avg;

	cout<<"Enter person's age:";
	cin>>age;
	cout<<"Enter number of times they've moved:";
	cin>>moved;

	//as the first house is alo to be counted
	moved++;

	avg=age/moved;	
	cout<<"Average number of years lived in a house:"<<avg<<endl;

	return 0;
}