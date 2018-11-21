#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>


using namespace std;

void resfu(double a, double b, double xn, double xk, double dx)
{
	double y, sum(0), multi(1), F,k(0);
	for (int x = xn; x <= xk; x += dx)
	{
		y = a / (b + pow(2 * x + 1, 2)) + b / (a + pow(x*x + b, -2));
		sum += y;
		multi *= y;
		k++;

	}
	F = (sum + multi) / b;
	
	cout << F;
}

int main() {

	setlocale(LC_ALL, "Russian");
	double a, b, xn, xk, dx;
	double F;
	cout << "¬ведите a: ";
	cin >> a;
	cout << "¬ведите b: ";
	cin >> b;
	cout << "¬ведите xn: ";
	cin >> xn;
	cout << "¬ведите xk: ";
	cin >> xk;
	cout << "¬ведите dx: ";
	cin >> dx;
	
	resfu(a, b, xn, xk, dx);

	_getch();
	return 0;
}
