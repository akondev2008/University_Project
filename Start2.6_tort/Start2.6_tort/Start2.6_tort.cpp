#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "How many students are there? ";
	cin >> a;
	cout << "How many piecies of cake do you have? ";
	cin >> b;
	float ost = b % a;
	cout << "Each student will get " << b / a << " pieces of cake." << endl;
	cout << "There will be " << ost << " pieces of cake left over." << endl;
}