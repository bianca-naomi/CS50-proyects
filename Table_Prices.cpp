#include <iostream>
#include <iomanip>

using namespace std;
int main ()
{
	cout << "Unit Price: \n";
	double price;
	cin >> price;

	cout << "Quantity     Price\n";
	int quantity = 1;
	cout
		<< fixed << setprecision(2)<< setw(8)
		<< quantity 
		<< setw(10) 
		<< quantity * price << endl;
	quantity = 12;
	cout
		<< setw(8) 
		<< quantity 
		<< setw(10) 
		<< price * quantity << endl;
	quantity = 100;
	cout 
		<< setw(8) 
		<< quantity 
		<< setw(10) 
		<< price * quantity << endl;
	return 0;
}
