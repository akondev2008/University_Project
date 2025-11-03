// Start7.2_calculus_func.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int number()
{
	int a;
	cout << "Введите число: ";
	cin >> a;
    return a;
}
int sum(int a, int b)
{
	return a + b;
}
int min(int a, int b)
{
	return a - b;
}
int umnojenie(int a, int b)
{
	return a * b;
}
int delenie(int a, int b)
{
	return a / b;
}
int stepen(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}
	return result;
}
int modul(int a, int b)
{
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	return a + b;
}
int koren(int a, int b)
{
	int result = 1;
	while(result != a)
	{
		if (stepen(result, b) == a)
			break;
		else result++;
	}
	return result;
}
int main()
{
	int a = number(), b = number();
	cout << "Сумма: " << sum(a, b) << endl;
	cout << "Разность: " << min(a, b) << endl;
	cout << "Произведение: " << umnojenie(a, b) << endl;
	cout << "Частное: " << delenie(a, b) << endl;
	cout << "Степень: " << stepen(a, b) << endl;
	cout << "Модуль: " << modul(a, b) << endl;
	cout << "Корень: " << koren(a, b) << endl;
	return 0;
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
