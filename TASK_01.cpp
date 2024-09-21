#include<iostream>
using namespace std;
int main()
{
	int sides;
	cout<<"Enter number of sides of polygon:";
	cin>>sides;
	cout<<"The sum of total internal angles of "<<sides<<"-sided polygon is "<<(sides-2)*180<<" degrees!"<<endl;
	return 0;
}