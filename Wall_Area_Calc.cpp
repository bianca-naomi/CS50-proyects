#include <iostream>
#include <iomanip>
using namespace std;

// In order to paint a wall that has a number of windows,
// we need to calculate the area of the wall minus the area of the windows.
// Each window has an area of 6 square feet. 
// The program will prompt the user for the width and height of the wall, as well as the number of windows.
// Then calculate and display the area of the wall that needs to be painted.*/

int main()
{
	
	cout << "Wall width: \n";
	double wall_width;
	cout << "Wall height: \n";
	double wall_height;
	cin >> wall_width >> wall_height;

	cout << "Number of windows: \n";
	int num_windows;
	cin >> num_windows;

	double Area = (wall_width * wall_height) - (num_windows * 6);

	cout << fixed << setprecision(2) << "The area of the wall is: " << Area << endl;

	return 0;
}
