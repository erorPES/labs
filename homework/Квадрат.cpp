#include<iostream>
#include<math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int h, i, j, k;
	i = 1;
	j = 1;
	k = 1;
	cout << "\nВведите размер стороны квадрата: ";
	cin >> h;
	while (i <= h) {
		if (i == 1 || i == h) {
			while (j <= h) {
				cout << "* ";
				j++;
			}
		}
		else {
			while (k <= h) {
				if (k == 1 || k == h) {
					cout << "* ";
					k++;
				}
				else {
					cout << "  ";
					k++;
				}
			}
		}
		cout << endl;
		i++;
		k = 1;
		j = 1;
	}

}