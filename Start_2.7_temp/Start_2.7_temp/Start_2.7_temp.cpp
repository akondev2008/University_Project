// Start_2.7_temp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(UTF - 8);
	int temp;
	cout << "Введите температуру в градусах Цельсия: ";
	cin >> temp;
	if (temp > 25) {
		cout << "На улице тепло,возмите воду" << endl;
	}
	else if (temp < 25) {
		cout << "На улице холодно, наденьте куртку" << endl;
	}
	else {
		cout << "цифрами" << endl;
	}
