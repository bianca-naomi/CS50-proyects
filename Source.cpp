#include <iostream>
#include <string>

using namespace std;

int main () 
{ 
	cout << "Please enter you first and last name on the next line." << endl;

	string name;
	cin >> name;
	string lastname;
	cin >> lastname;

	string dot = name.substr(0, 1) + "." + lastname;
	cout << dot << endl;
	return (0);
}