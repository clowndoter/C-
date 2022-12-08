#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main() {
	int temp;
	int a[5];
	int min = 1;
	int max = 50;
	int max_index=0,min_index=0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
    max=a[0];
    min=a[0];
	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
    cout<<endl;

    for (int i = 0; i < 5; i++) {
		if(max<a[i])
        {
            max=a[i];
            max_index=i;
        }
        		if(min>a[i])
        {
            min=a[i];
            min_index=i;
        }
	}

	temp=a[max_index];
	a[max_index]=a[min_index];
	a[min_index]=temp;

	for (int i = 0; i < 5; i++) {
		cout << a[i] << ' ';
	}
    return 0;
}
