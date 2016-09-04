#include <iostream>

using namespace std;

void printMaxMinValues(int array[], int arraySize);

enum ItemData
{
	ItemDataValue = 0,
	ItemDataIndex,
	ItemDataCount
};

int main()
{
	int const arr[10] {52, 56, 89, 2, 15, 8, 26, 84, 61, 4};
	int const arraySize = sizeof(arr) / sizeof(int);
	printMaxMinValues(arr, arraySize);
}

void printMaxMinValues(int array[], int arraySize)
{
	int min[ItemDataCount] {100, 0};
	int max[ItemDataCount]] {0, 0};
	for (int i = 0; i < arraySize; ++i)
	{
		int const item = array[i];
		if (min[ItemDataValue] > item)
		{
			min[ItemDataValue] = item;
			min[ItemDataIndex] = i;
		}
		if (max[ItemDataValue]] < array[i])
		{
			max[ItemDataValue] = item;
			max[ItemDataIndex] = i;
		}
	}
	cout << "Minimum value = " << min[ItemDataValue] << ", position: " << min[ItemDataIndex] << endl <<
		"Maximum value = " << max[ItemDataValue] << ", position " << max[ItemDataIndex] << endl;
}
