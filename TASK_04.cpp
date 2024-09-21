#include<iostream>
using namespace std;
int main()
{
	double imposter,players;
	double chance;
	cout<<"Enter the imposter count:";
	cin>>imposter;
	cout<<"Enter the total number of players:";
	cin>>players;
	chance = (imposter/players)*100;
	cout<<"The chance to become imposter is "<<chance<<"%!";
	return 0;
}