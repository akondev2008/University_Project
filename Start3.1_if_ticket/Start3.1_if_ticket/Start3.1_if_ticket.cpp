#include <iostream>
using namespace std;
int main()
{
	int age,tick;
	cout << "Enter your age: ";
	cin >> age;
	if (age >= 18){
		cout << "Do you have a ticket?(1-yes,2-no)";
		cin >> tick;
		if (tick == 1){
			cout << "Welcome to the cinema!!!" << endl;
		} 
		else {
			cout << "Buy a ticket!!!" << endl;
		}
	} 
	else {
		cout << "Minnimum from 18!!!" << endl;
	}
	return 0;
}