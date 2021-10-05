#include "iostream"
using namespace std;

int main()
{
	double a, b, x, y, z, f;
	int numb_f;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите значение переменной Z" << endl;
	cin >> z;
	cout << "Введите значение переменной A" << endl;
	cin >> a;
	cout << "Введите значение переменной B" << endl;
	cin >> b;
	if (z < 1)
		x = pow(z, 2);
	else
		x = z + 1;
	cout << "Выберите функцию f(x):" << endl << "1 - f(x)=2*x" << endl << "2 - f(x)=pow(x, 2)" << endl << "3 - f(x)=3/x" << endl;
	cin >> numb_f;
	switch (numb_f)
	{
	case 1: f = 2 * x;
		break;
	case 2: f = pow(x, 2);
		break;
	case 3: f = x / 3;
		break;
	default: cout << "Error";
	}
	y = (2 * a * f + b * pow(fabs(x), 1.0 / 2.0)) / (pow(x, 2) + 5);
	cout << "Y=" << y << endl;
	return 0;
}