#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
    int x;
	int k =0;
	int a[10];
	int min = 1;
	int max = 50;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
	for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
    cout<<endl;
    cout << " Enter number: ";
	cin >> x;
	for (int i = 0; i < 10; i++) {
		if (x < a[i])
        {
            k++;
        }
	}
	cout << "Number of elements that greater than A:" << k << endl;
}
