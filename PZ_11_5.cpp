#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;



int main() {
	int temp;
	int a[5];
	int min = 1;
	int max = 40;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
		for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << endl << "The second largest element:" << a[3] << endl;
}
