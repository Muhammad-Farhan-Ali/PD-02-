#include<iostream>
using namespace std;
int main()
{
	double bag_size,price,area;
	double cost_per_pound,cost_of_fertilizing_area;
	cout<<"Enter size of the fertilizer bag in pounds: ";
	cin>>bag_size;
	cout<<"Enter the cost of bag: $";
	cin>>price;
	cout<<"Enter the area in square feet that can be covered by the bag: ";
	cin>>area;
	cost_per_pound=price/bag_size;
	cout<<"Cost of fertilizere per pound: $"<<cost_per_pound<<endl;
	cost_of_fertilizing_area=price/area;
	cout<<"Cost of fertilizing per square foot: $"<<cost_of_fertilizing_area<<endl;
	return 0;
}