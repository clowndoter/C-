#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int m=6,n=4;
int k=0;
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
        if(a[i][j]%2==0 && a[i][j]!=0)
        {
            k++;
        }
    }
    cout<<"Amount in "<<j<<":"<<k<<endl;
    k=0;
}
}
