#include<iostream>
using namespace std;
int main()
{
	double vf,vi,acc,time;
	cout<<"Enter initial velocity (m/s):";
	cin>>vi;
	cout<<"Enter acceleration (m/s^2):";
	cin>>acc;
	cout<<"Enter time taken (sec):";
	cin>>time;
	vf=vi+acc*time;
	cout<<"Final velocity is "<<vf<<" m/s!";
	return 0;
}