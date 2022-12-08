#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
int m=3,n=4;
int max_i,max_j;
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
int max=a[0][0];
for(int i=0; i<m; i++)
{
    for(int j=0; j<n; j++)
    {
        if(max<a[i][j])
        {
            max=a[i][j];
            max_i=i;
            max_j=j;
        }
    }
}
cout<<"Max="<<max<<"["<<max_i<<"]"<<"["<<max_j<<"]"<<endl;
}
