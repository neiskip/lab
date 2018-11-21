#include <iostream>
#include <conio.h>
#include <cmath>


using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	const int j(7);
	double y[j] = {-0.5, 3.4, 1.4, 0.35, -7.5, 1.2, 0.25};



	for (int i(0); i<7; i++)
	{
		if (y[i] > 0 && y[i] < 1) {
			cout << "y[" << i << "] = " << y[i] << endl;
		}
	}
	

	_getch();
	return 0;
}
