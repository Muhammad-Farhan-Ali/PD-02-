#include<iostream>
using namespace std;
int main()
{
	double veg_price,fruit_price,earnings;
	int veg_kilo,fruit_kilo;

	cout<<"Enter vegetable price per kilogram (in coins): ";
	cin>>veg_price;
	cout<<"Enter fruit price per kilogram (in coins): ";
	cin>>fruit_price;
	cout<<"Enter total kilogram of vegetables: ";
	cin>>veg_kilo;
	cout<<"Enter total kilogram of fruits: ";
	cin>>fruit_kilo;
	//1 Rps == 1.94 coins
	earnings=((veg_price*veg_kilo)/1.94)+((fruit_price*fruit_kilo)/1.94);

	cout<<"Total earnings: Rs."<<earnings;

	return 0;
}