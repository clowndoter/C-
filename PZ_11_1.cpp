#include <iostream>

using namespace std;

int main()
{
	const int length = 12;
	int array[length] = { 20, 10, 60, 55, 40, 98, 62, 65, 21, 111, 1, 352 };


    cout<<"To bigger: "<<endl;

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}

		swap(array[startIndex], array[smallestIndex]);
	}

	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';




    cout<<""<<endl;
	cout<<"To smaller: "<<endl;

		for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] > array[smallestIndex])
				smallestIndex = currentIndex;
		}

		swap(array[startIndex], array[smallestIndex]);
	}

	for (int index = 0; index < length; ++index)
		cout << array[index] << ' ';

	return 0;
}
