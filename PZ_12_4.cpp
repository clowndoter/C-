#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int m=4,n=6;
int suma=0;
int a[m][n];
srand(time(NULL));
for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
a[i][j]=rand()%5;
for(int i=0; i<m; i++)
{ for(int j=0; j<n; j++)
cout<<setw(3)<<a[i][j];
cout<<endl;
}
for(int j=0; j<n; j++)
{
    for(int i=0; i<m; i++)
    {
        suma=suma+a[i][j];
    }
    cout<<"Suma "<<j<<" stovpchika:"<<suma<<endl;
    suma=0;
}
}
