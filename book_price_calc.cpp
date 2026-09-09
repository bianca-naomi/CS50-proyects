#include <iostream>

using namespace std;

int main ()
{
	cout << " Enter the price of the first book: ";
	double first;
	cin >> first;
	
	cout << " Enter the price of the second book: ";
	double second;
	cin >> second;
	
	cout << " Enter the price of the third book: ";
	double third;
	cin >> third;
	
	double sum = first + second + third;
	cout << " The total cost is: $" << sum << endl;
	return 0;
}
