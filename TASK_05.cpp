#include<iostream>
using namespace std;
int main()
{
	double weight_to_lose;
	double days;
	string name;
	cout<<"Enter your name:";
	getline(cin,name);
	cout<<"Enter the weight to lose in kilogram:";
	cin>>weight_to_lose;
	//As it require 15 days to lose 1 kg
	days=15*weight_to_lose;
	cout<<name<<" will require "<<days<<" days to lose "<<weight_to_lose<<" Kilogram by following doctor's suggestion!"<<endl;
	return 0;
}