#include <iostream>

using namespace std;

void interchange(int[10]);
void couting(int[10]);

int main()
{
	int arr[10]{ 52,56,89,2,15,8,26,84,61,4 };
	couting(arr);
	interchange(arr);
}

void interchange(int arr[10])
{
	for (int i = 0, j = 9; i < 5; i++, j--)
	{
		int l = arr[i];
		arr[i] = arr[j];
		arr[j] = l;
	}
	couting(arr);
}

void couting(int arr[10])
{
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
