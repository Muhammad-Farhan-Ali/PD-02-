#include<iostream>
using namespace std;
int main()
{
	int paint,width,height,number_of_walls;

	cout<<"Enter number of square meters you can paint:";
	cin>>paint;
	cout<<"Width of single wall:";
	cin>>width;
	cout<<"Height of single wall:";
	cin>>height;
		
	number_of_walls=paint/(width*height);

	cout<<"Number of walls you can paint:"<<number_of_walls<<endl;

	return 0;
}