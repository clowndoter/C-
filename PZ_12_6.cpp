#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int m=4,n=7;
int min_i,min_j;
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
int min=a[0][0];
for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
    {
        if(min>a[i][j])
        {
            min=a[i][j];
            min_i=i;
            min_j=j;
        }
    }
}
cout<<"Min="<<min<<"["<<min_i<<"]"<<"["<<min_j<<"]"<<endl;
}
