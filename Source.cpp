#include<iostream>
//input ABC
//Expected output: ABC ACB BAC BCA CAB CBA

using namespace std;

int main()
{
	char let1;
	char let2;
	char let3;

	cin >> let1 >> let2 >> let3;

	cout << let1 << let2 << let3;
	cout << " " << let1 << let3 << let2;
	cout << " " << let2 << let1 << let3;
	cout << " " << let2 << let3 << let1;
	cout << " " << let3 << let1 << let2;
	cout << " " << let3 << let2 << let1;
	return 0;
}