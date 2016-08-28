#include <iostream>

using namespace std;

int inArr(int[30]);
int prime(int[30]);
void out(int[30]);

int main()
{
	int arr[30];
	inArr(arr);
	cout << endl << "prime number in arr = " << prime(arr) << endl;
	return 0;
}

int inArr(int arr[30])
{
	for (int i = 0; i < 30; i++)
	{
		arr[i] = i + 1;
	}
	out(arr);
	return arr[30];
}

int prime(int arr[30])
{
	int result = 0;
	for (int i = 0; i < 30; i++)
	{
		int n=0;
		for (int j = 1; j <= arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				n++;
			}
			if (n > 2)
			{
				break;
			}
			if (arr[i] == j)
			{
				result++;
			}
		}
	}
	return result;
}

void out(int arr[30])
{
	for (int i = 0; i < 30; i++)
	{
		cout << arr[i] << " ";
	}
}
