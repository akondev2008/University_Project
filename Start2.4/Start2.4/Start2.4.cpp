#include <iostream>
using namespace std;
int main()
{	
	int a,h;
	double area;
	cout << "Enter the base and height of the triangle: " << endl;
	cout << endl << "Base: ";
	cin >> a;
	cout << endl << "Height: ";
	cin >> h;
	area = 0.5 * a * h;
	cout << "The area of the triangle is: " << area << " cm^2" << endl;


}