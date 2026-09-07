#include <iostream>
using namespace std;

int main() 
{
	double length, width;
	cout << "Enter the length of the rectangle: ";
	cin >> length;

	cout << "Enter the width of the rectangle: ";
	cin >> width;

	double area;
	area = length * width;

	cout << "The area of the rectangle is: " << area;

	cin.ignore();
	cin.get();

	return 0;
}
