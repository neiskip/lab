#include <iostream>
#include <conio.h>
#include <cmath>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;

	int *x = new int[n];
	int *y = new int[n];
	
	srand(time(0));
	for (int count = 0; count < n; count++) {
		x[count] = rand();
		cout << "x[" << count << "]= " << x[count] << endl;
	}
	int max = x[0];

	for (int i = 0; i < n; ++i)
		if (x[i] > max)
			max = x[i];
	cout << "max= " << max;
	int tmp;
	for (int i = 0; i < n; ++i)
		if (max == x[i]) {
			tmp = x[0];
			x[0] = x[i];
			x[i] = tmp;
		}
	cout << "\n";
	for (int i = 0; i < n; ++i) {
		y[i] = x[i];
		cout << "y[" << i << "]= " << y[i]<<endl;
	}
	delete[] x;
	delete[] y;

	_getch();
	return 0;
}
