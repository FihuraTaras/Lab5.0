// Lab5.0.cpp 
// IT-12 Fihura Taras

#include <iostream>
#include <cmath>
using namespace std;
double f(const double x, const double y, const double z); // ��������
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (f(1, t + s, s) + f(t, s * t, 1)) / (f(s, 1, t) * f(s, 1, t));
	cout << "c = " << c << endl;
	return 0;
}
double f(const double a, const double b, const double c) // ����������
{
	return (a * sin(b) + b * sin(a) + (c * c));
}