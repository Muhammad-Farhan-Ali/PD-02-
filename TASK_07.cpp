#include<iostream>
using namespace std;
int main()
{
	string Mname;
	int adult,child,adult_price,child_price,total;
	double percentage,charity;

	cout<<"enter the name of the movie:";
	getline(cin,Mname);
	cout<<"Enter price of adult ticket: $";
	cin>>adult_price;
	cout<<"Enter price of children ticket: $";
	cin>>child_price;
	cout<<"Enter the number of adult tickets sold:";
	cin>>adult;
	cout<<"Enter the number of children tickets sold:";
	cin>>child;
	cout<<"Enter the percentage of amount to be denoted to charity:";
	cin>>percentage;
	cout<<endl;

	cout<<"Movie:"<<Mname<<endl;
	total=(adult_price*adult)+(child_price*child); 
	cout<<"Total amount generated from tickets: $"<<total<<endl;
	charity=(percentage/100)*total;
	cout<<"Amount donated to charity ("<<percentage<<"):"<<charity<<endl;
	cout<<"Remaining amount after charity: $"<<total-charity;

	return 0;
}