#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int bottles;
	cout << "Enter the number of bottles and cans: ";
	cin >> bottles;
	int cans;
	cin >> cans;

	cout << "Bottles: ";
	cout << setw(8) << bottles;
	cout << endl;
	cout << "Cans:    ";
	cout << setw(8) << cans;
	cout << endl;	
	return 0;
}
