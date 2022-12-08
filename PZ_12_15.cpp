#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int m=3,n=3;
int suma=0;
int a[m][n];
srand(time(NULL));
for(int i=0; i<m; i++)
for(int j=0; j<n; j++)
a[i][j]=rand()%20;
for(int i=0; i<m; i++)
{ for(int j=0; j<n; j++)
cout<<setw(3)<<a[i][j];
cout<<endl;
}
for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
    {
        if(i==j)
        {
            suma=suma+a[i][j];
        }
    }
}
cout<<"Suma golovnoi diagonali="<<suma<<endl;
suma=0;
for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
    {
        if(i+j==n-1)
        {
            suma=suma+a[i][j];
        }
    }
}
cout<<"Suma pobichnoi diagonali="<<suma<<endl;
}
