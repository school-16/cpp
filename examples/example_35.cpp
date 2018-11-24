#include <iostream>

using namespace std;

void swap(int array[], int i, int j);
int indexOfMin(int array[], int start, int end);
void insertSort(int array[], int n);
void printArray(int array[], int n);

int main()
{
	const int N = 100;
	int array[N] = {4, 3, 1, 2, 5, 6, 8, 9, 7, 0};
	int n = 10;

	insertSort(array, n);
	printArray(array, n);

	return 0;
}

void swap(int array[], int i, int j)
{
	int tmp = array[i];
	array[i] = array[j];
	array[j] = tmp;
}

int indexOfMin(int array[], int start, int end)
{
	int maxIndex = start;

	for (int i = start + 1; i < end; i++)
	{
		if (array[i] < array[maxIndex]) maxIndex = i;
	}

	return maxIndex;
}

void insertSort(int array[], int n)
{
	int minIndex;

	for (int i = 0; i < n; i++)
	{
		minIndex = indexOfMin(array, i, n);
		swap(array, i, minIndex);
	}
}

void printArray(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}
