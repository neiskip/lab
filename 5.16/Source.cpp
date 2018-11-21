#include <iostream>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <math.h>
#include <ctime>
#include <vector>


using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	int k;
	int n;
	cin >> n;
	cin >> k;
	int *X = new int[n];
	int *Y = new int[n];
	vector<int> Z(n+k);
		srand(time(0));

	for (int count = 0; count < n; count++) {
		X[count] = rand()/100-100;
		cout << "X[" << count << "]= " << X[count] << endl;
		}
	cout << "\n\n";
	for (int count = 0; count < k; count++) {
		Y[count] = rand()/100-100;
		cout << "Y[" << count << "]= " << Y[count] << endl;
		}

	for (int i(0); i < n; i++) {
		if (X[i] >= 0)
			Z.push_back(X[i]);
	}

	for (int i(0); i < k; i++) {
		if (Y[i] >= 0)
			Z.push_back(Y[i]);
	}
	unsigned int size = Z.size();
	
	for (int i(0); i < n; i++) {
		for (int l(0); l < n; l++)
			if (Z[l] == 0)
				Z.erase(Z.begin());
	}
	for (int i(0); i < size; i++) {
		cout << "Z[" << i << "] = " << Z[i] << endl;
	}
	_getch();
	return 0;
}
