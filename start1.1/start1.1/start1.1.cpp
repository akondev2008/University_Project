#include <iostream>

using namespace std;

int main()
{
	float a, b, c, d, e;
	cout << "how many kg of apples you want?"<< /n<<" 1 kg of apples is 2500" << endl;cin >> a;
	cout << "how many kg of onions you want??" << endl;cin >> b;
	cout << "how many kg of bananas you want??" << endl;cin >> c;
	cout << "how many kg of potatoes you want??" << endl;cin >> d;
	cout << "how many kg of tomatoes you want??" << endl;cin >> e;
	cout << "the total cost is " << (a * 2500 + b * 1500 + c * 18000 + d * 3000 + e * 8000) << "summ" << endl;
}