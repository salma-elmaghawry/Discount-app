#include <iostream>
using namespace std;
int main()
{
	int price = 100;
	int discount = 10;
	int years;
	cout << "Enter the number of years in company \n";
	cin >> years;
	switch (years)
	{
	case 1 :
		discount = 20;
		break;
	case 2 :
		discount = 40;
		break;
	case 3 :
		discount = 60;
		break;

	}
	cout << "The price is " << price - discount << endl;
}