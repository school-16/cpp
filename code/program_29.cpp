#include <iostream>

using namespace std;

int main()
{
    const int N = 100;
    int a[N];
    int n, k;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> k;

    cout << *(a + k) << endl;

    return 0;
}
