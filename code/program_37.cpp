#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
	int n;

	cin >> n;
	cout << factorial(n) << endl;

	return 0;
}

int factorial(int n)
{
	if (n < 2) return 1;
	return factorial(n - 1) * n;
}
