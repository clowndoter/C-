#include <iostream>

using namespace std;

int main()
{
    	const int length = 12;
	int array[length] = { -20, 10, 60, -55, 40, 198, -62, 65, -21, 111, -1, 52 };
    int Max=array[1];
    int max_index=0;
    for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';
		cout<<endl;
for (int index = 0; index < length; ++index)
		{
		    if(Max<array[index])
            {
                Max=array[index];
                max_index=index;
            }
		}
    cout<<"Max="<<Max<<endl;

    for (int index = 0; index < length; ++index)
		{
		    if(max_index<index && array[index]<0)
            {
                array[index]=0;
            }
		}


	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';




}
