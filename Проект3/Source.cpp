#include <iostream>
#include <conio.h>
#include <ctime>


using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	int n,k(0),sc(0);
	cin >> n;
	int *x = new int[n];
	
	srand(time(0));
	for (int count = 0; count < n; count++) {
		x[count] = rand()%21-5;
		cout << "x[" << count << "] = " << x[count]<<endl;
		if (x[count] >= 2 && x[count] <= 3)
			k++;
	}
	int m(0);
	int *y = new int[k];
	for (int i(0); i < n; i++) {
		if (x[m] >= 2 && x[m] <= 3) {
			y[i] = x[m];
			sc += y[i];
			cout << "y[" << m << "]= " << y[m] << endl;
		}
		if (x[i] == 0)
		
		m++;
	}
	cout << "k= " << k<<"\t";
	cout << "Ñóììà: " << sc;

	delete[] x;

	_getch();
	return 0;
}
