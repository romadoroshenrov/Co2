#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	const double PI = 3.141592;
	cout << "Введите площадь:";
	double a, b, s;
	cin >> s;
	a = s / PI;
	b = pow(a, 0.5);
	cout << "диаметр = :" << b * 2 << endl << "длинна окружности:" << b * PI * 2;
}
