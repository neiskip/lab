#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>



using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	const int n = 4;
	int a[n][n] = { {2,3,5,6},{3,5,1,4},{4,1,6,3},{5,7,3,1} };
	int s[n],l[n];
	for (int i(0); i < n; i++) {
		s[i] = 0;
		l[i] = 0;

	}
	for (int i(0); i < n; i++) {
		for (int j(0); j < n; j++) {
			s[i] += a[i][j];
			l[i] += a[j][i];
		}
	}
	for (int i(0); i < n; i++) {
		cout << s[i] << endl;
	}
	cout << endl << endl;
	for (int i(0); i < n; i++) {
		cout << l[i] << endl;
	}
	_getch();
	return 0;
}