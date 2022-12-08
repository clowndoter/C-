#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int k=0;
	int a[10];
	int min = 0;
	int max = 20;
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		a[i] = min + rand() % (max - min + 1);
	}
		for (int i = 0; i < 10; i++) {
		cout << a[i] << ' ';
	}
    cout<<endl;
	for (int i = 0; i < 10; i++) {
		if(a[i]==0 && k==0)
        {
            cout<<"Number of first zero:"<<i+1<<endl;
            k++;
        }
	}
	if(k==0)
    {
        cout<<"No zero element!"<<endl;
    }
}
