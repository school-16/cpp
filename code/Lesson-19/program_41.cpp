#include <iostream>

using namespace std;


const int M = 20;

void readArray(int a[][M], int n, int m);
void printArray(int a[][M], int n, int m);

int main()
{
	const int N = 20;
	int a[N][M];
	int n, m;

	cin >> n >> m;
	readArray(a, n, m);
	cout << "===================" << endl;
	printArray(a, n, m);

	return 0;
}

void readArray(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
}

void printArray(int a[][M], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";

		cout << endl;
	}
	cout << endl;
}
