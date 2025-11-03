// Start5.1_calculator.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	char operation;
	cout << "please enter two numbers:\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "please enter operation:\n";
	cout << "1. +\n 2. -\n 3.*\n 4./\n 5.pow\n 6.sqrt\n 7.abs\n 8.%\n";
	cout << "operation = ";
	cin >> operation;
	switch (operation)
	{
		case '+':
		cout << "a + b = " << a + b << endl;
		break;
		case '-':
			cout << "a - b = " << a - b << endl;
			break;
		case '*':
			cout << "a * b = " << a * b << endl;
			break;
		case '/':
			if (b != 0)
			{
				cout << "a / b = " << a* 1.0/ b << endl;
			}
			else
			{
				cout << "Error: Division by zero!" << endl;
			}
			break;
		case 'p':
			cout << "a ** b = " << pow(a, b) << endl;
			break;
		case 's':
			if (a >= 0)
			{
				cout << "sqrt(a) = " << pow(a,0.5) << endl;
			}
			else
			{
				cout << "Error: sqrt(a) is undefined for negative a!" << endl;
			}
			if (b >= 0)
			{
				cout << "sqrt(b) = " << pow(b,0.5) << endl;
			}
			else
			{
				cout << "Error: sqrt(b) is undefined for negative b!" << endl;
			}
			break;
		case 'a':
			if (a < 0)
			{
				cout << "abs(a) = " << -a << endl;
			}
			else
			{
				cout << "abs(a) = " << a << endl;
			}
			if (b < 0)
			{
				cout << "abs(b) = " << -b << endl;
			}
			else
			{
				cout << "abs(b) = " << b << endl;
			}
			break;
		case '%':
			if (b != 0)
			{
				cout << "a % b = " << a % b << endl;
			}
			else
			{
				cout << "Error: Division by zero!" << endl;
			}
			break;
		default:
			cout << "Error: Invalid operation!" << endl;
			break;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
