#include<iostream>
using namespace std;
int main()
{
	int minutes,fps,frames;
	cout<<"Enter number of minutes:";
	cin>>minutes;
	cout<<"Frames per second:";
	cin>>fps;
	frames=(minutes*60)*fps;
	cout<<"Total number of frames:"<<frames<<"!"<<endl;
	return 0;
}