#include <iostream>

using namespace std;

void sorting(int[10]);

int main()
{
	int arr[10]{ 52,56,89,2,15,8,26,84,61,4 };
	sorting(arr);
}

// Функция выполняет не сортировку, а поиск минимального/максимального значения
void sorting(int arr[10])
{
	int min[2]{ 100,0 };
	int max[2]{ 0,0 };
	for (int i = 0; i < 10; i++)
	{
		if (min[0]>arr[i])
		{
			min[0] = arr[i];
			min[1] = i+1;
		}
		else if (max[0]<arr[i])
		{
			max[0] = arr[i];
			max[1] = i+1;
		}
	}
	cout << "min = " << min[0] << " : " << min[1] << endl
		<< "max = " << max[0] << " : " << max[1] << endl;
}
