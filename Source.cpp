#include <iostream>
#include <string>
using namespace std;	
int main() 
{
	string word;
	cin >> word;
	int len = word.length();

	int num_chars = 2 + (len % 2);
	int start = (len / 2) - 1;

	string result = word.substr(start, num_chars);
	cout << result << endl;
	return 0;
}